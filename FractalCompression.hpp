#ifndef FRACTAL_COMPRESSION_H
#define FRACTAL_COMPRESSION_H

#include <string>
#include <vector>

class FractalCompression {
public:
    FractalCompression(const std::string& inputFile, const std::string& outputFile)
        : m_inputFile(inputFile), m_outputFile(outputFile) {}

    std::vector<double> compressBMP();
    std::vector<std::vector<double>> compressTIFF();

private:
    std::vector<double> compressFractal(const std::vector<double>& pixelValues);
    std::vector<double> getPixelValues(const std::string& inputFile);
    void writeCompressedData(const std::string& outputFile, const std::vector<double>& compressedData);

    std::string m_inputFile;
    std::string m_outputFile;
};

#endif // FRACTAL_COMPRESSION_H