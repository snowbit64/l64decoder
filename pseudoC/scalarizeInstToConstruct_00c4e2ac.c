// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scalarizeInstToConstruct
// Entry Point: 00c4e2ac
// Size: 408 bytes
// Signature: undefined __thiscall scalarizeInstToConstruct(IR_Section * this, uint param_1, uint param_2, vector * param_3, bool * param_4)


/* IR_Section::scalarizeInstToConstruct(unsigned int, unsigned int, std::__ndk1::vector<unsigned
   int, std::__ndk1::allocator<unsigned int> >&, bool&) */

ulong __thiscall
IR_Section::scalarizeInstToConstruct
          (IR_Section *this,uint param_1,uint param_2,vector *param_3,bool *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  puVar12 = *(undefined8 **)(*(long *)(this + 0x20) + (ulong)param_1 * 8);
  uVar2 = *(uint *)(puVar12 + 1);
  if (-1 < (int)uVar2) {
    puVar8 = (uint *)IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),uVar2)
    ;
    uVar7 = *puVar8;
    bVar1 = uVar7 - 1 < 2;
    if ((bVar1 && uVar7 < 2 || bVar1 && uVar7 == 2) && puVar8[2] - 3 < 6 ||
        (bVar1 && uVar7 < 2 || bVar1 && uVar7 == 2) && puVar8[2] - 3 == 6) {
      uVar7 = *(uint *)((long)puVar12 + (ulong)(param_2 + *(ushort *)((long)puVar12 + 6) + 2) * 4);
      uVar11 = (ulong)uVar7;
      if ((int)uVar7 < 0) {
        *puVar12 = 0x1000100000012;
        lVar10 = (uVar11 & 0x7fffffff) * 0x18;
        puVar5 = (undefined8 *)(*(long *)(*(IR_Function **)this + 0x80) + lVar10);
        uStack_68 = puVar5[1];
        local_70 = *puVar5;
        uVar7 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_70);
        *(uint *)((long)puVar12 + ((ulong)(*(uint *)((long)puVar12 + 4) >> 0xe) & 0x3fffc) + 8) =
             uVar7 | 0x80000000;
        puVar12 = (undefined8 *)(*(long *)(*(IR_Function **)this + 0x80) + lVar10);
        uStack_68 = puVar12[1];
        local_70 = *puVar12;
        uVar7 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_70);
        lVar10 = *(long *)param_3;
        uVar7 = uVar7 | 0x80000000;
      }
      else {
        piVar9 = (int *)IR_RegisterSet::getRegisterType
                                  ((IR_RegisterSet *)(*(long *)this + 0x98),uVar7);
        if (*piVar9 == 0) {
          lVar10 = *(long *)param_3;
        }
        else {
          lVar10 = *(long *)param_3;
          if (*(int *)(lVar10 + uVar11 * 4) == -1) goto LAB_00c4e410;
        }
        *puVar12 = 0x1000100000012;
        uVar3 = *(uint *)(lVar10 + uVar11 * 4);
        uVar4 = uVar7;
        if (uVar3 != 0xffffffff) {
          uVar4 = uVar3;
        }
        *(uint *)((long)puVar12 + 0xc) = uVar4;
        uVar4 = *(uint *)(lVar10 + uVar11 * 4);
        if (uVar4 != 0xffffffff) {
          uVar7 = uVar4;
        }
      }
      *(uint *)(lVar10 + (ulong)uVar2 * 4) = uVar7;
      *param_4 = true;
    }
  }
LAB_00c4e410:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return (ulong)param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


