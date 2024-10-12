#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

// Function to remove unnecessary characters from a string (tags, spaces)
std::string removeTags(const std::string& str) {
    std::string result;
    bool insideTag = false;

    for (char c : str) {
        if (c == '<') {
            insideTag = true;
            continue;
        } else if (c == '>') {
            insideTag = false;
            continue;
        }

        if (!insideTag) {
            result += c;
        }
    }

    return result;
}

// Function to split a string by a delimiter
std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    std::ifstream file("task3.html");
    if (!file.is_open()) {
        std::cout << "Error opening the file!" << std::endl;
        return 1;
    }

    std::string line;
    std::vector<std::vector<std::vector<std::string>>> tables;
    std::vector<int> rowCount;

    while (std::getline(file, line)) {
        if (line.find("<table>") != std::string::npos) {
            std::vector<std::vector<std::string>> table;
            int rows = 0;

            while (std::getline(file, line) && line.find("</table>") == std::string::npos) {
                if (line.find("<tr>") != std::string::npos) {
                    std::vector<std::string> row;

                    while (std::getline(file, line) && line.find("</tr>") == std::string::npos) {
                        if (line.find("<td>") != std::string::npos) {
                            std::string cell = removeTags(line);
                            row.push_back(cell);
                        }
                    }

                    if (!row.empty()) {
                        table.push_back(row);
                        rows++;
                    }
                }
            }

            if (!table.empty()) {
                tables.push_back(table);
                rowCount.push_back(rows);
            }
        }
    }

    file.close();

    // Find the table with the maximum number of rows
    auto maxRows = std::max_element(rowCount.begin(), rowCount.end());
    int maxRowIndex = std::distance(rowCount.begin(), maxRows);

    std::cout << "Table with the maximum number of rows:" << std::endl;
    for (const auto& row : tables[maxRowIndex]) {
        for (const auto& cell : row) {
            std::cout << cell << " | ";
        }
        std::cout << std::endl;
    }

    // Analyze table data
    for (size_t i = 0; i < tables.size(); ++i) {
        std::cout << "Table " << i + 1 << ":" << std::endl;

        // Calculate the average values of numeric columns
        std::vector<double> numericColumnSum(tables[i][0].size(), 0.0);
        int numericColumnCount = 0;

        for (const auto& row : tables[i]) {
            for (size_t j = 0; j < row.size(); ++j) {
                try {
                    double value = std::stod(row[j]);
                    numericColumnSum[j] += value;
                    numericColumnCount++;
                } catch (const std::invalid_argument&) {
                    // Skip non-numeric values
                }
            }
        }

        std::cout << "Average values of numeric columns:" << std::endl;
        for (size_t j = 0; j < numericColumnSum.size(); ++j) {
            double average = numericColumnSum[j] / numericColumnCount;
            std::cout << "Column " << j + 1 << ": " << average << std::endl;
        }

        // Count the number of rows and columns
        std::cout << "Number of rows: " << rowCount[i] << std::endl;
        std::cout << "Number of columns: " << tables[i][0].size() << std::endl;

        std::cout << std::endl;
    }

    return 0;
}
