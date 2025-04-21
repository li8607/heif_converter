#ifndef FLUTTER_PLUGIN_HEIF_CONVERTER_PLUGIN_H_
#define FLUTTER_PLUGIN_HEIF_CONVERTER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace heif_converter {

class HeifConverterPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  HeifConverterPlugin();

  virtual ~HeifConverterPlugin();

  // Disallow copy and assign.
  HeifConverterPlugin(const HeifConverterPlugin&) = delete;
  HeifConverterPlugin& operator=(const HeifConverterPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace heif_converter

#endif  // FLUTTER_PLUGIN_HEIF_CONVERTER_PLUGIN_H_
