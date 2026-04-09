// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: matchRegisters
// Entry Point: 00c40b7c
// Size: 1092 bytes
// Signature: undefined matchRegisters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::matchRegisters() */

void IR_Section::matchRegisters(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  long *in_x0;
  long *this;
  IR_Section *this_00;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long **this_01;
  uint uVar17;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  uint local_b8;
  undefined8 *local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  this = in_x0 + 4;
  lVar12 = *this;
  if (in_x0[5] != lVar12) {
    uVar15 = 0;
    local_b8 = 0;
    do {
      piVar18 = *(int **)(lVar12 + uVar15 * 8);
      iVar16 = *piVar18;
      if (iVar16 == 4 || iVar16 == 2) {
        uVar17 = 0;
        bVar8 = iVar16 != 2;
        iVar10 = 2;
        if (!bVar8) {
          iVar10 = 3;
        }
        uVar14 = 1;
        if (!bVar8) {
          uVar14 = 2;
        }
        do {
          this_00 = (IR_Section *)
                    IR_InstructionSequence::getSection
                              ((IR_InstructionSequence *)in_x0,
                               piVar18[(ulong)*(ushort *)((long)piVar18 + 6) + (ulong)uVar17 + 3]);
          if (this_00 != (IR_Section *)0x0) {
            this_01 = (long **)(this_00 + 0x20);
            lVar12 = **this_01;
            lVar19 = *(long *)(*(long *)(this_00 + 0x28) + -8);
            uVar4 = *(ushort *)(lVar12 + 6);
            uVar11 = *(uint *)(lVar19 + 4) & 0xffff;
            uVar5 = uVar11 - bVar8;
            if (iVar16 == 4) {
              iVar9 = *(int *)(((ulong)(*(uint *)(lVar19 + 4) >> 0xe) & 0x3fffc) + lVar19 + 8);
              iVar1 = *(int *)((long)piVar18 + ((ulong)((uint)piVar18[1] >> 0xe) & 0x3fffc) + 8);
              if (iVar1 < 0) {
                if (-1 < iVar9) {
                  local_80 = (undefined8 *)operator_new__(0x10);
                  *local_80 = 0x100010000001a;
                  *(int *)(local_80 + 1) = iVar9;
                  *(int *)((long)local_80 + 0xc) = iVar1;
                  std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                            ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this,
                             (int)*this + local_b8 * 8,(uint **)&local_80);
                  local_b8 = local_b8 + 1;
                  *(int *)((long)piVar18 + ((ulong)((uint)piVar18[1] >> 0xe) & 0x3fffc) + 8) = iVar9
                  ;
                }
              }
              else {
                local_80 = (undefined8 *)operator_new__(0x10);
                *local_80 = 0x100010000001a;
                *(int *)(local_80 + 1) = iVar1;
                *(int *)((long)local_80 + 0xc) = iVar9;
                std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                          ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_01,
                           (int)*(undefined8 *)(this_00 + 0x28) - 8,(uint **)&local_80);
                *(int *)(((ulong)(*(uint *)(lVar19 + 4) >> 0xe) & 0x3fffc) + lVar19 + 8) = iVar1;
              }
            }
            uVar6 = uVar4 - uVar5;
            uVar15 = (ulong)uVar6;
            if (uVar5 != 0) {
              uVar20 = 0;
              do {
                iVar9 = (int)uVar20;
                uVar13 = (ulong)(iVar9 + 2);
                uVar2 = *(uint *)(lVar12 + uVar13 * 4);
                uVar3 = piVar18[uVar13];
                if ((int)uVar2 < 0) {
                  *(uint *)(lVar12 + uVar13 * 4) = uVar3;
                  IR_RegisterSet::mergeRegisterDetails
                            ((IR_RegisterSet *)(*in_x0 + 0x98),uVar3,uVar3);
                }
                else {
                  replaceReg(this_00,uVar2,uVar3,0);
                }
                uVar2 = *(uint *)(lVar19 + (ulong)((bVar8 | 2) + iVar9 +
                                                  (uint)*(ushort *)(lVar19 + 6)) * 4);
                if (uVar3 != uVar2) {
                  local_80 = (undefined8 *)operator_new__(0x10);
                  *local_80 = 0x100010000001a;
                  *(uint *)(local_80 + 1) = uVar3;
                  *(uint *)((long)local_80 + 0xc) = uVar2;
                  std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                            ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)this_01,
                             (int)*(undefined8 *)(this_00 + 0x28) - 8,(uint **)&local_80);
                  *(uint *)(lVar19 + (ulong)((bVar8 | 2) + iVar9 + (uint)*(ushort *)(lVar19 + 6)) *
                                     4) = uVar3;
                  if (-1 < (int)uVar2) {
                    IR_RegisterSet::mergeRegisterDetails
                              ((IR_RegisterSet *)(*in_x0 + 0x98),uVar3,uVar2);
                  }
                }
                uVar20 = uVar20 + 1;
              } while (uVar5 != uVar20);
            }
            if (uVar6 != 0) {
              uVar11 = (2 - (uint)bVar8) + uVar11;
              do {
                uVar5 = *(uint *)(lVar12 + (ulong)uVar11 * 4);
                uVar6 = piVar18[iVar10 + uVar11 + (uint)*(ushort *)((long)piVar18 + 6)];
                if ((int)uVar5 < 0) {
                  *(uint *)(lVar12 + (ulong)uVar11 * 4) = uVar6;
                }
                else {
                  iVar9 = countRegisterWrites(this_00,uVar5,1);
                  if (iVar9 == 0) {
                    replaceReg(this_00,uVar5,uVar6,0);
                  }
                  else {
                    *(uint *)(lVar12 + (ulong)uVar11 * 4) = uVar6;
                    local_80 = (undefined8 *)operator_new__(0x10);
                    *local_80 = 0x100010000001a;
                    *(uint *)(local_80 + 1) = uVar5;
                    *(uint *)((long)local_80 + 0xc) = uVar6;
                    std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
                              ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)
                               this_01,(int)*this_01 + 8,(uint **)&local_80);
                    IR_RegisterSet::mergeRegisterDetails
                              ((IR_RegisterSet *)(*in_x0 + 0x98),uVar5,uVar6);
                  }
                }
                uVar11 = uVar11 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            matchRegisters();
            *(undefined4 *)(lVar12 + 4) = 0;
            *(uint *)(lVar19 + 4) = (uint)(iVar16 == 4);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar14);
        uVar17 = (uint)piVar18[1] >> 0x10;
        iVar9 = piVar18[uVar17 + 3];
        iVar10 = piVar18[(ulong)uVar17 + 2];
        if (iVar16 == 2) {
          piVar18[2] = iVar10;
          lVar19 = 4;
          lVar12 = 3;
          iVar16 = 3;
          iVar10 = iVar9;
          iVar9 = piVar18[uVar17 + 4];
        }
        else {
          lVar12 = 2;
          lVar19 = 3;
          iVar16 = 2;
        }
        piVar18[1] = iVar16;
        piVar18[lVar12] = iVar10;
        piVar18[lVar19] = iVar9;
      }
      local_b8 = local_b8 + 1;
      uVar15 = (ulong)local_b8;
      lVar12 = in_x0[4];
    } while (uVar15 < (ulong)(in_x0[5] - lVar12 >> 3));
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


