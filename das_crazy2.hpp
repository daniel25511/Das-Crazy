#pragma once
#include <format>
#include <string_view>

namespace das_crazy
{
  struct [[nodiscard]] das_crazy {};
}

template<>
struct std::formatter<das_crazy::das_crazy> : std::formatter<std::string_view>
{
  auto format([[maybe_unused]] das_crazy::das_crazy obj, std::format_context& ctx) const
  {
    return std::format_to(ctx.out(), "Das Crazy!");
  }
};

template<>
struct std::hash<das_crazy::das_crazy>
{
  auto operator()([[maybe_unused]] das_crazy::das_crazy obj) const noexcept -> std::size_t
  {
    return 0;
  }
};
