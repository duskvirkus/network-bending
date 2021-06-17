#include <opencv2/opencv.hpp>
#include <torch/script.h>

torch::Tensor translate(torch::Tensor image) {
  image = image.to(torch::kCPU);

  cv::imwrite("test.jpg", image);  
  
  return image;
}

static auto registry =
  torch::RegisterOperators("my_ops::visualize", &visualize);