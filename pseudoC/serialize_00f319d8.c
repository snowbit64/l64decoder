// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serialize
// Entry Point: 00f319d8
// Size: 352 bytes
// Signature: undefined __thiscall serialize(btTypedConstraint * this, void * param_1, btSerializer * param_2)


/* btTypedConstraint::serialize(void*, btSerializer*) const */

char * __thiscall
btTypedConstraint::serialize(btTypedConstraint *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  btTypedConstraint bVar3;
  btTypedConstraint bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  btTypedConstraint **ppbVar8;
  undefined4 uVar9;
  
  uVar5 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x28));
  lVar6 = *(long *)param_2;
  *(undefined8 *)param_1 = uVar5;
  uVar5 = (**(code **)(lVar6 + 0x38))(param_2,*(undefined8 *)(this + 0x30));
  lVar6 = *(long *)param_2;
  *(undefined8 *)((long)param_1 + 8) = uVar5;
  uVar5 = (**(code **)(lVar6 + 0x50))(param_2,this);
  lVar6 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar5);
  *(long *)((long)param_1 + 0x10) = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar5);
  }
  bVar3 = this[0x1d];
  uVar1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 8);
  uVar9 = *(undefined4 *)(this + 0x18);
  bVar4 = this[0x1c];
  *(uint *)((long)param_1 + 0x24) = (uint)(byte)bVar3;
  *(undefined4 *)((long)param_1 + 0x34) = uVar1;
  lVar6 = *(long *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x38) = uVar9;
  *(uint *)((long)param_1 + 0x3c) = (uint)(byte)bVar4;
  uVar5 = *(undefined8 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
  uVar2 = *(uint *)(lVar6 + 0x234);
  uVar7 = (ulong)uVar2;
  *(undefined8 *)((long)param_1 + 0x28) = *(undefined8 *)(this + 0x38);
  if (0 < (int)uVar2) {
    ppbVar8 = *(btTypedConstraint ***)(lVar6 + 0x240);
    do {
      if (*ppbVar8 == this) {
        *(undefined4 *)((long)param_1 + 0x30) = 1;
      }
      uVar7 = uVar7 - 1;
      ppbVar8 = ppbVar8 + 1;
    } while (uVar7 != 0);
  }
  uVar2 = *(uint *)(*(long *)(this + 0x30) + 0x234);
  uVar7 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    ppbVar8 = *(btTypedConstraint ***)(*(long *)(this + 0x30) + 0x240);
    do {
      if (*ppbVar8 == this) {
        *(undefined4 *)((long)param_1 + 0x30) = 1;
      }
      uVar7 = uVar7 - 1;
      ppbVar8 = ppbVar8 + 1;
    } while (uVar7 != 0);
  }
  return "btTypedConstraintFloatData";
}


