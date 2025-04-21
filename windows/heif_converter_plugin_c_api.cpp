#include "include/heif_converter/heif_converter_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "heif_converter_plugin.h"

void HeifConverterPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  heif_converter::HeifConverterPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
