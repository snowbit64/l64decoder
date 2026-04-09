// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eliminateReadsFromConstantStructFields
// Entry Point: 00c417e4
// Size: 280 bytes
// Signature: undefined __thiscall eliminateReadsFromConstantStructFields(IR_Section * this, IR_TypeSet * param_1)


/* IR_Section::eliminateReadsFromConstantStructFields(IR_TypeSet*) */

void __thiscall
IR_Section::eliminateReadsFromConstantStructFields(IR_Section *this,IR_TypeSet *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  IR_Function *this_00;
  ulong uVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(this + 0x20);
  lVar5 = *(long *)(this + 0x28);
  if (lVar5 != lVar6) {
    uVar8 = 0;
    do {
      puVar7 = *(undefined8 **)(lVar6 + uVar8 * 8);
      if ((*(uint *)puVar7 & 0xfffffffd) == 0xc) {
        local_60 = (undefined8 *)0x0;
        uVar4 = chainAccessesConstantField(this,(uint *)puVar7,0,param_1,(IR_Const **)&local_60);
        puVar2 = local_60;
        if ((uVar4 & 1) != 0) {
          *puVar7 = 0x100010000001a;
          this_00 = *(IR_Function **)this;
          local_70 = IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(this_00 + 0x98),*(uint *)(puVar7 + 1));
          uStack_78 = puVar2[1];
          local_80 = *puVar2;
          uVar3 = IR_Function::storeConst(this_00,(IR_TConst *)&local_80);
          *(uint *)((long)puVar7 + ((ulong)(*(uint *)((long)puVar7 + 4) >> 0xe) & 0x3fffc) + 8) =
               uVar3 | 0x80000000;
        }
        lVar6 = *(long *)(this + 0x20);
        lVar5 = *(long *)(this + 0x28);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar5 - lVar6 >> 3));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


