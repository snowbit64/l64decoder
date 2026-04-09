// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 008fa434
// Size: 524 bytes
// Signature: undefined __thiscall deserialize(Decimator * this, File * param_1, bool param_2)


/* Decimator::deserialize(File&, bool) */

void __thiscall Decimator::deserialize(Decimator *this,File *param_1,bool param_2)

{
  long *this_00;
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint local_64;
  int local_60;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_5c,4);
  if ((((iVar4 == 4) && (local_5c == *(int *)(this + 0x10))) &&
      (iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_60,4), iVar4 == 4)) &&
     (local_60 == *(int *)(this + 0x14))) {
    if (param_2) {
      iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_64,4);
      if ((iVar4 == 4) && (local_64 == *(uint *)(this + 0x18))) {
        local_60 = *(int *)(this + 0x14);
        uVar7 = local_64;
LAB_008fa510:
        uVar7 = local_60 * *(int *)(this + 0x10) * uVar7;
        if (uVar7 == 0) {
          bVar2 = true;
        }
        else {
          lVar10 = 0;
          do {
            lVar11 = *(long *)(this + 8);
            iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_64,4);
            if (iVar4 != 4) goto LAB_008fa604;
            this_00 = (long *)(lVar11 + lVar10);
            lVar5 = *this_00;
            lVar8 = this_00[1] - lVar5 >> 2;
            uVar6 = (ulong)local_64;
            uVar9 = lVar8 * -0x5555555555555555;
            if (uVar6 <= uVar9) {
              if (uVar6 <= uVar9 && uVar9 - uVar6 != 0) {
                this_00[1] = lVar5 + uVar6 * 0xc;
              }
            }
            else {
              std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::__append
                        ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)this_00,
                         uVar6 + lVar8 * 0x5555555555555555);
              lVar5 = *(long *)(lVar11 + lVar10);
            }
            iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar5,local_64 * 0xc);
            if ((long)iVar4 != (ulong)(local_64 * 3) * 4) goto LAB_008fa604;
            iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar11 + lVar10 + 0x18,8);
            bVar2 = iVar4 == 8;
          } while ((bVar2) &&
                  (bVar3 = (ulong)uVar7 * 0x20 + -0x20 != lVar10, lVar10 = lVar10 + 0x20, bVar3));
        }
        goto LAB_008fa608;
      }
    }
    else {
      uVar7 = *(uint *)(this + 0x18);
      if (uVar7 == 1) goto LAB_008fa510;
    }
  }
LAB_008fa604:
  bVar2 = false;
LAB_008fa608:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


