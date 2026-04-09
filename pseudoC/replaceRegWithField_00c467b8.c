// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replaceRegWithField
// Entry Point: 00c467b8
// Size: 336 bytes
// Signature: undefined __thiscall replaceRegWithField(IR_Section * this, uint param_1, uint param_2)


/* IR_Section::replaceRegWithField(unsigned int, unsigned int) */

void __thiscall IR_Section::replaceRegWithField(IR_Section *this,uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  undefined4 local_78 [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (-1 < (int)param_2) {
    lVar6 = *(long *)this;
    uVar5 = IR_RegisterSet::hasRegister((IR_RegisterSet *)(lVar6 + 0x98),param_2);
    if ((uVar5 & 1) == 0) {
      IR_RegisterSet::copyRegisterDetails((IR_RegisterSet *)(lVar6 + 0x98),param_1,param_2);
    }
  }
  lVar6 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar6) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(lVar6 + uVar5 * 8);
      uVar2 = *(uint *)(lVar6 + 4);
      if (0xffff < uVar2) {
        uVar8 = (ulong)(uVar2 >> 0x10);
        puVar9 = (uint *)(lVar6 + 8);
        do {
          if (*puVar9 == param_1) {
            local_78[0] = 0;
            uVar4 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)local_78);
            *puVar9 = uVar4 | 0x80000000;
          }
          puVar9 = puVar9 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if ((uVar2 & 0xffff) != 0) {
        lVar7 = 0;
        do {
          lVar1 = lVar7 + (ulong)*(ushort *)(lVar6 + 6) + 2;
          if (*(uint *)(lVar6 + lVar1 * 4) == param_1) {
            *(uint *)(lVar6 + lVar1 * 4) = param_2;
          }
          lVar7 = lVar7 + 1;
        } while ((uVar2 & 0xffff) != (uint)lVar7);
      }
      lVar6 = *(long *)(this + 0x20);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(this + 0x28) - lVar6 >> 3));
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


