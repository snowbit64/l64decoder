// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerSoundId
// Entry Point: 0070fe64
// Size: 224 bytes
// Signature: undefined __thiscall registerSoundId(AnimalSoundSystem * this, uint param_1, char * param_2)


/* AnimalSoundSystem::registerSoundId(unsigned int, char const*) */

void __thiscall
AnimalSoundSystem::registerSoundId(AnimalSoundSystem *this,uint param_1,char *param_2)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 0x18);
  lVar9 = *(long *)(this + 0x20);
  if (lVar9 != lVar10) {
    uVar8 = 0;
    do {
      lVar6 = lVar10 + uVar8 * 0x58;
      sVar4 = strlen(param_2);
      pbVar7 = (byte *)(lVar6 + 8);
      bVar2 = *pbVar7;
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x10);
      }
      if (sVar4 == sVar1) {
                    /* try { // try from 0070fef8 to 0070ff0b has its CatchHandler @ 0070ff44 */
        iVar3 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,(ulong)param_2);
        if (iVar3 == 0) {
          *(uint *)(*(long *)(this + 0x18) + uVar8 * 0x58) = param_1;
          return;
        }
        lVar10 = *(long *)(this + 0x18);
        lVar9 = *(long *)(this + 0x20);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar5 = (lVar9 - lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar8 <= uVar5 && uVar5 - uVar8 != 0);
  }
  return;
}


