#pragma once
#include <Windows.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include "Functions.h"
#include "Offsets.h"
#include "kiero/kiero.h"
#include "kiero/minhook/include/MinHook.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx9.h"
#include "vars.h"
#define WINDOW_NAME "ImGuiExample"
typedef long(__stdcall* EndScene)(LPDIRECT3DDEVICE9);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);