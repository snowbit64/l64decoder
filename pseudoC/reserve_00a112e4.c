// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00a112e4
// Size: 376 bytes
// Signature: undefined __thiscall reserve(vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>> * this, ulong param_1)


/* std::__ndk1::vector<EnvMapBlender::LoadingFile,
   std::__ndk1::allocator<EnvMapBlender::LoadingFile> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>::
reserve(vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>> *this,
       ulong param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  pvVar6 = *(void **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pvVar6 >> 3) * -0x30c30c30c30c30c3) < param_1) {
    if (0x186186186186186 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar7 = *(void **)(this + 8);
    pvVar2 = operator_new(param_1 * 0xa8);
    lVar1 = (long)pvVar2 + ((long)pvVar7 - (long)pvVar6);
    pvVar2 = (void *)((long)pvVar2 + param_1 * 0xa8);
    lVar3 = lVar1;
    if ((long)pvVar7 - (long)pvVar6 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
    }
    else {
      do {
        uVar8 = *(undefined8 *)((long)pvVar7 + -0x98);
        uVar10 = *(undefined8 *)((long)pvVar7 + -0xa0);
        uVar9 = *(undefined8 *)((long)pvVar7 + -0xa8);
        pvVar5 = (void *)((long)pvVar7 + -0xa8);
        *(undefined8 *)(lVar3 + -0x90) = *(undefined8 *)((long)pvVar7 + -0x90);
        *(undefined8 *)(lVar3 + -0x98) = uVar8;
        *(undefined8 *)(lVar3 + -0xa0) = uVar10;
        *(undefined8 *)(lVar3 + -0xa8) = uVar9;
        uVar9 = *(undefined8 *)((long)pvVar7 + -0x60);
        uVar8 = *(undefined8 *)((long)pvVar7 + -0x68);
        uVar11 = *(undefined8 *)((long)pvVar7 + -0x70);
        uVar10 = *(undefined8 *)((long)pvVar7 + -0x78);
        uVar13 = *(undefined8 *)((long)pvVar7 + -0x80);
        uVar12 = *(undefined8 *)((long)pvVar7 + -0x88);
        *(undefined8 *)(lVar3 + -0x58) = *(undefined8 *)((long)pvVar7 + -0x58);
        *(undefined8 *)(lVar3 + -0x60) = uVar9;
        *(undefined8 *)(lVar3 + -0x68) = uVar8;
        *(undefined8 *)(lVar3 + -0x70) = uVar11;
        *(undefined8 *)(lVar3 + -0x78) = uVar10;
        *(undefined8 *)(lVar3 + -0x80) = uVar13;
        *(undefined8 *)(lVar3 + -0x88) = uVar12;
        uVar9 = *(undefined8 *)((long)pvVar7 + -0x48);
        uVar8 = *(undefined8 *)((long)pvVar7 + -0x50);
        *(undefined8 *)(lVar3 + -0x40) = *(undefined8 *)((long)pvVar7 + -0x40);
        *(undefined8 *)(lVar3 + -0x48) = uVar9;
        *(undefined8 *)(lVar3 + -0x50) = uVar8;
        *(undefined8 *)((long)pvVar7 + -0x48) = 0;
        *(undefined8 *)((long)pvVar7 + -0x40) = 0;
        *(undefined8 *)((long)pvVar7 + -0x50) = 0;
        uVar9 = *(undefined8 *)((long)pvVar7 + -0x10);
        uVar8 = *(undefined8 *)((long)pvVar7 + -0x18);
        uVar11 = *(undefined8 *)((long)pvVar7 + -0x30);
        uVar10 = *(undefined8 *)((long)pvVar7 + -0x38);
        uVar13 = *(undefined8 *)((long)pvVar7 + -0x20);
        uVar12 = *(undefined8 *)((long)pvVar7 + -0x28);
        *(undefined *)(lVar3 + -8) = *(undefined *)((long)pvVar7 + -8);
        lVar4 = lVar3 + -0xa8;
        *(undefined8 *)(lVar3 + -0x10) = uVar9;
        *(undefined8 *)(lVar3 + -0x18) = uVar8;
        *(undefined8 *)(lVar3 + -0x20) = uVar13;
        *(undefined8 *)(lVar3 + -0x28) = uVar12;
        *(undefined8 *)(lVar3 + -0x30) = uVar11;
        *(undefined8 *)(lVar3 + -0x38) = uVar10;
        lVar3 = lVar4;
        pvVar7 = pvVar5;
      } while (pvVar5 != pvVar6);
      pvVar6 = *(void **)this;
      pvVar7 = *(void **)(this + 8);
      *(long *)this = lVar4;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar2;
      while (pvVar2 = pvVar7, pvVar2 != pvVar6) {
        pvVar7 = (void *)((long)pvVar2 + -0xa8);
        if ((*(byte *)((long)pvVar2 + -0x50) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x40));
        }
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
  }
  return;
}


