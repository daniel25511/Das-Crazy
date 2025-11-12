#pragma once

namespace das_crazy
{
  struct das_crazy { };

  [[nodiscard]] auto get_das_crazy() noexcept -> das_crazy
  {
    return das_crazy{};
  }
}
