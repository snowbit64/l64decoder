// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerSoundTriggerId
// Entry Point: 0070914c
// Size: 268 bytes
// Signature: undefined __thiscall registerSoundTriggerId(AnimalAnimationSystemSource * this, uint param_1, basic_string * param_2)


/* AnimalAnimationSystemSource::registerSoundTriggerId(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
AnimalAnimationSystemSource::registerSoundTriggerId
          (AnimalAnimationSystemSource *this,uint param_1,basic_string *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  AnimalAnimationSystemSource AVar4;
  int iVar5;
  AnimalAnimationSystemSource *__s2;
  ulong uVar6;
  AnimalAnimationSystemSource *pAVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(this + 0x2918);
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(this + uVar8 * 0x28 + 0x2924) == 0) {
        bVar3 = *(byte *)param_2;
        AVar4 = this[uVar8 * 0x28 + 0x2928];
        uVar6 = (ulong)((byte)AVar4 >> 1);
        __n = uVar6;
        if (((byte)AVar4 & 1) != 0) {
          __n = *(size_t *)(this + uVar8 * 0x28 + 0x2930);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 2);
        }
        if (__n == sVar1) {
          pAVar7 = *(AnimalAnimationSystemSource **)(this + uVar8 * 0x28 + 0x2938);
          if (((byte)AVar4 & 1) == 0) {
            pAVar7 = this + uVar8 * 0x28 + 0x2929;
          }
          __s2 = (AnimalAnimationSystemSource *)((long)param_2 + 1);
          if ((bVar3 & 1) != 0) {
            __s2 = *(AnimalAnimationSystemSource **)(param_2 + 4);
          }
          if (((byte)AVar4 & 1) == 0) {
            if (__n != 0) {
              pAVar7 = this + uVar8 * 0x28 + 0x2929;
              do {
                if (*pAVar7 != *__s2) goto LAB_00709194;
                uVar6 = uVar6 - 1;
                pAVar7 = pAVar7 + 1;
                __s2 = __s2 + 1;
              } while (uVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(pAVar7,__s2,__n), iVar5 != 0)) goto LAB_00709194;
          *(uint *)(this + uVar8 * 0x28 + 0x2940) = param_1;
        }
      }
LAB_00709194:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  return;
}


