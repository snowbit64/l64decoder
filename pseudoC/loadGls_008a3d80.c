// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadGls
// Entry Point: 008a3d80
// Size: 440 bytes
// Signature: undefined __thiscall loadGls(GranularSynthesisRuntimeSettings * this, uchar * param_1, int param_2, int param_3, uint param_4, uint param_5, uint param_6, RampType param_7, int param_8, uint param_9)


/* GranularSynthesisRuntimeSettings::loadGls(unsigned char const*, int, int, unsigned int, unsigned
   int, unsigned int, GranularSynthesisRuntimeSettings::RampType, int, unsigned int) */

int __thiscall
GranularSynthesisRuntimeSettings::loadGls
          (GranularSynthesisRuntimeSettings *this,uchar *param_1,int param_2,int param_3,
          uint param_4,uint param_5,uint param_6,RampType param_7,int param_8,uint param_9)

{
  uint uVar1;
  undefined uVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  size_t __n;
  void **this_00;
  long *this_01;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  iVar3 = 0;
  uVar1 = 0x14;
  if (param_5 != 0) {
    uVar1 = param_5;
  }
  uVar8 = (ulong)(uint)param_8;
  *(RampType *)(this + 0x10) = param_7;
  *(uint *)(this + 8) = param_6;
  *(uint *)(this + 0xc) = uVar1;
  if ((param_8 != 0) && (uVar7 = (ulong)param_9, param_9 != 0)) {
    uVar9 = (ulong)param_8;
    this_01 = (long *)(this + 0x30);
    uVar4 = *(long *)(this + 0x38) - *this_01 >> 4;
    if (uVar4 < uVar9) {
      std::__ndk1::
      vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>>
      ::__append((vector<GranularSynthesisRuntimeSettings::Grain,std::__ndk1::allocator<GranularSynthesisRuntimeSettings::Grain>>
                  *)this_01,uVar9 - uVar4);
    }
    else if (uVar9 < uVar4) {
      *(ulong *)(this + 0x38) = *this_01 + uVar9 * 0x10;
    }
    uVar4 = (ulong)param_3;
    if (uVar9 * 0xd + (long)param_2 <= uVar4) {
      puVar5 = (undefined4 *)(*this_01 + 8);
      do {
        puVar6 = (undefined4 *)param_1;
        uVar8 = uVar8 - 1;
        uVar10 = *(undefined8 *)(puVar6 + 1);
        uVar2 = *(undefined *)(puVar6 + 3);
        *puVar5 = *puVar6;
        *(undefined8 *)(puVar5 + -2) = uVar10;
        *(undefined *)(puVar5 + 1) = uVar2;
        puVar5 = puVar5 + 4;
        param_1 = (uchar *)(undefined4 *)((long)puVar6 + 0xd);
      } while (uVar8 != 0);
      if ((long)((int)(uVar9 * 0xd) + param_2) + 0x10U <= uVar4) {
        *(undefined4 *)(this + 0x50) = *(undefined4 *)((long)puVar6 + 0xd);
        *(undefined4 *)(this + 0x54) = *(undefined4 *)((long)puVar6 + 0x11);
        __n = uVar7 * 2;
        *(undefined4 *)(this + 0x48) = *(undefined4 *)((long)puVar6 + 0x15);
        *(undefined4 *)(this + 0x4c) = *(undefined4 *)((long)puVar6 + 0x19);
        if ((__n + (long)(param_2 + (int)(uVar9 * 0xd00000000 + 0xc00000000 >> 0x20) + 4) <= uVar4)
           && (*(uint *)((long)puVar6 + 0x1d) == param_9)) {
          this_00 = (void **)(this + 0x18);
          __dest = *this_00;
          uVar8 = *(long *)(this + 0x20) - (long)__dest >> 1;
          if (uVar8 < uVar7) {
            std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                      ((vector<short,std::__ndk1::allocator<short>> *)this_00,uVar7 - uVar8);
            __dest = *this_00;
          }
          else if (uVar7 < uVar8) {
            *(void **)(this + 0x20) = (void *)((long)__dest + uVar7 * 2);
          }
          memcpy(__dest,(void *)((long)puVar6 + 0x21),__n);
          return (int)__n + (int)(uVar9 * 0xd00000000 + 0x1400000000 >> 0x20);
        }
      }
    }
    iVar3 = -1;
  }
  return iVar3;
}


