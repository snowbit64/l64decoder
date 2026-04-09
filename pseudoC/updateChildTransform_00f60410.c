// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateChildTransform
// Entry Point: 00f60410
// Size: 324 bytes
// Signature: undefined __thiscall updateChildTransform(btCompoundShape * this, int param_1, btTransform * param_2, bool param_3)


/* btCompoundShape::updateChildTransform(int, btTransform const&, bool) */

void __thiscall
btCompoundShape::updateChildTransform
          (btCompoundShape *this,int param_1,btTransform *param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)param_2;
  puVar5 = (undefined8 *)(*(long *)(this + 0x30) + (long)param_1 * 0x58);
  puVar5[1] = *(undefined8 *)(param_2 + 8);
  *puVar5 = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  puVar5[3] = *(undefined8 *)(param_2 + 0x18);
  puVar5[2] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  puVar5[5] = *(undefined8 *)(param_2 + 0x28);
  puVar5[4] = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  puVar5[7] = *(undefined8 *)(param_2 + 0x38);
  puVar5[6] = uVar6;
  if (*(long *)(this + 0x60) != 0) {
    plVar3 = *(long **)(*(long *)(this + 0x30) + (long)param_1 * 0x58 + 0x40);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2,&local_58,&local_68);
    plVar3 = *(long **)(this + 0x60);
    puVar5 = *(undefined8 **)(*(long *)(this + 0x30) + (long)param_1 * 0x58 + 0x50);
    lVar4 = FUN_00f424e4(plVar3,puVar5);
    if (lVar4 != 0) {
      iVar1 = *(int *)(plVar3 + 2);
      if (iVar1 < 0) {
        lVar4 = *plVar3;
      }
      else {
        while ((iVar1 != 0 && (*(long *)(lVar4 + 0x20) != 0))) {
          iVar1 = iVar1 + -1;
          lVar4 = *(long *)(lVar4 + 0x20);
        }
      }
    }
    puVar5[1] = uStack_50;
    *puVar5 = local_58;
    puVar5[3] = uStack_60;
    puVar5[2] = local_68;
    FUN_00f42680(plVar3,lVar4,puVar5);
  }
  if (param_3) {
    (**(code **)(*(long *)this + 0x88))(this);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


