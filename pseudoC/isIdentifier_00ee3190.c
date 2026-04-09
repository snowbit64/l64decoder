// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isIdentifier
// Entry Point: 00ee3190
// Size: 120 bytes
// Signature: undefined __thiscall isIdentifier(Luau * this, basic_string_view param_1)


/* Luau::isIdentifier(std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >) */

bool __thiscall Luau::isIdentifier(Luau *this,basic_string_view param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (ulong)param_1;
  if (uVar2 != 0) {
    lVar3 = -1;
    do {
      pvVar1 = memchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_",
                      (uint)(byte)*this,0x40);
      if (pvVar1 == (void *)0x0) {
        return lVar3 == 0;
      }
      this = this + 1;
      lVar3 = lVar3 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return true;
}


