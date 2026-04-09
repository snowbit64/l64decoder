// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: equalsLower
// Entry Point: 00ee30b8
// Size: 156 bytes
// Signature: undefined __cdecl equalsLower(basic_string_view param_1, basic_string_view param_2)


/* Luau::equalsLower(std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >) */

bool Luau::equalsLower(basic_string_view param_1,basic_string_view param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  byte *in_x2;
  ulong in_x3;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar4 = (ulong)param_2;
  if (uVar4 == in_x3) {
    if (uVar4 == 0) {
      return true;
    }
    bVar1 = *(byte *)(ulong)param_1;
    bVar2 = *in_x2;
    uVar5 = bVar1 | 0x20;
    if (0x19 < bVar1 - 0x41) {
      uVar5 = (uint)bVar1;
    }
    uVar6 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41) {
      uVar6 = (uint)bVar2;
    }
    if (uVar5 == uVar6) {
      uVar3 = 1;
      do {
        uVar7 = uVar3;
        if (uVar4 == uVar7) break;
        bVar1 = ((byte *)(ulong)param_1)[uVar7];
        bVar2 = in_x2[uVar7];
        uVar5 = bVar1 | 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar5 = (uint)bVar1;
        }
        uVar6 = bVar2 | 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar6 = (uint)bVar2;
        }
        uVar3 = uVar7 + 1;
      } while (uVar5 == uVar6);
      return uVar4 <= uVar7;
    }
  }
  return false;
}


