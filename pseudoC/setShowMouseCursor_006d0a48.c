// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShowMouseCursor
// Entry Point: 006d0a48
// Size: 8 bytes
// Signature: undefined __cdecl setShowMouseCursor(bool param_1)


/* Application::setShowMouseCursor(bool) */

void Application::setShowMouseCursor(bool param_1)

{
  AndroidInputDevice::setShowMouseCursor(SUB81(*(undefined8 *)((ulong)param_1 + 0x180),0));
  return;
}


