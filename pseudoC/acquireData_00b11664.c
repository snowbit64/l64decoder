// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireData
// Entry Point: 00b11664
// Size: 768 bytes
// Signature: undefined __thiscall acquireData(SoftAudioStreamedReader * this, AudioBlock * param_1, uint * param_2, uint param_3)


/* SoftAudioStreamedReader::acquireData(ISoftAudioReader::AudioBlock&, unsigned int&, unsigned int)
    */

void __thiscall
SoftAudioStreamedReader::acquireData
          (SoftAudioStreamedReader *this,AudioBlock *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  char local_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar5 = FUN_00f276a0(0xffffffff,this + 0x80);
  if (iVar5 == -1) {
    if (this[0x84] != (SoftAudioStreamedReader)0x0) {
      uVar7 = 0;
      goto LAB_00b118dc;
    }
  }
  else {
    *(undefined4 *)(this + 0x18) = 0;
    (**(code **)(**(long **)(this + 0x10) + 0x30))();
    this[0x84] = (SoftAudioStreamedReader)0x0;
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar9 = *(ulong *)(this + 0x60);
    lVar11 = *(long *)((long)*(void ***)(this + 0x48) + (uVar9 >> 6 & 0x3fffffffffffff8));
    *(ulong *)(this + 0x60) = uVar9 + 1;
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + -1;
    pfVar12 = *(float **)(lVar11 + (uVar9 & 0x1ff) * 8);
    if (0x3ff < uVar9 + 1) {
      operator_delete(**(void ***)(this + 0x48));
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
      *(long *)(this + 0x60) = *(long *)(this + 0x60) + -0x200;
    }
    if (pfVar12 != (float *)0x0) {
      iVar5 = (**(code **)(**(long **)(this + 8) + 0x10))();
      if (((iVar5 == 5) || (iVar5 = (**(code **)(**(long **)(this + 8) + 0x10))(), iVar5 == 4)) &&
         (uVar9 = (**(code **)(**(long **)(this + 8) + 0x18))(), (uVar9 & 1) == 0)) {
        bVar4 = false;
        pfVar13 = pfVar12;
      }
      else {
        bVar4 = true;
        pfVar13 = *(float **)(this + 0x20);
      }
      uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x28))
                        (*(long **)(this + 0x10),*(undefined4 *)(this + 0x70),pfVar13,local_5c);
      if (uVar6 != 0) {
LAB_00b117ac:
        uVar1 = *(uint *)(this + 0x78);
        *(float **)param_1 = pfVar12;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar6 / uVar1;
        }
        uVar6 = 0;
        if (uVar1 != 0) {
          uVar6 = *(uint *)(this + 0x70) / uVar1;
        }
        iVar5 = *(int *)(this + 0x18);
        *(int *)(param_1 + 0x10) = iVar5;
        *(uint *)(this + 0x18) = iVar5 + uVar2;
        *(uint *)(param_1 + 8) = uVar6;
        *(uint *)(param_1 + 0xc) = uVar2;
        if (bVar4) {
          SoftAudioBuffer::convertBuffer(*(SoftAudioBuffer **)(this + 8),pfVar12,pfVar13,uVar2);
        }
        uVar7 = 1;
        goto LAB_00b118dc;
      }
      if (local_5c[0] == '\0') {
        lVar11 = *(long *)(this + 0x48);
        lVar8 = *(long *)(this + 0x68);
        uVar9 = 0;
        if (*(long *)(this + 0x50) - lVar11 != 0) {
          uVar9 = (*(long *)(this + 0x50) - lVar11) * 0x40 - 1;
        }
        uVar10 = lVar8 + *(long *)(this + 0x60);
        if (uVar9 == uVar10) {
          std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>::__add_back_capacity();
          lVar8 = *(long *)(this + 0x68);
          lVar11 = *(long *)(this + 0x48);
          uVar10 = *(long *)(this + 0x60) + lVar8;
        }
        *(long *)(this + 0x68) = lVar8 + 1;
        *(float **)(*(long *)(lVar11 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) =
             pfVar12;
      }
      else {
        uVar6 = *param_2;
        *param_2 = uVar6 + 1;
        if ((param_3 != 0) && (uVar6 + 1 == param_3)) {
          lVar11 = *(long *)(this + 0x48);
          lVar8 = *(long *)(this + 0x68);
          uVar9 = 0;
          if (*(long *)(this + 0x50) - lVar11 != 0) {
            uVar9 = (*(long *)(this + 0x50) - lVar11) * 0x40 - 1;
          }
          uVar10 = lVar8 + *(long *)(this + 0x60);
          if (uVar9 == uVar10) {
            std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>::__add_back_capacity();
            lVar8 = *(long *)(this + 0x68);
            lVar11 = *(long *)(this + 0x48);
            uVar10 = *(long *)(this + 0x60) + lVar8;
          }
          uVar7 = 0;
          *(long *)(this + 0x68) = lVar8 + 1;
          *(float **)(*(long *)(lVar11 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8)
               = pfVar12;
          this[0x84] = (SoftAudioStreamedReader)0x1;
          goto LAB_00b118dc;
        }
        *(undefined4 *)(this + 0x18) = 0;
        (**(code **)(**(long **)(this + 0x10) + 0x30))();
        uVar6 = (**(code **)(**(long **)(this + 0x10) + 0x28))
                          (*(long **)(this + 0x10),*(undefined4 *)(this + 0x70),pfVar13,local_5c);
        if (uVar6 != 0) goto LAB_00b117ac;
        releaseBuffer(this,pfVar12);
        if (local_5c[0] != '\0') {
          uVar7 = 0;
          this[0x84] = (SoftAudioStreamedReader)0x1;
          goto LAB_00b118dc;
        }
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar7 = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x18);
LAB_00b118dc:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


