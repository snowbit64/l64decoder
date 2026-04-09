// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCoordinates
// Entry Point: 00fa2aac
// Size: 324 bytes
// Signature: undefined __thiscall getCoordinates(btConvexHullInternal * this, Vertex * param_1)


/* btConvexHullInternal::getCoordinates(btConvexHullInternal::Vertex const*) */

undefined  [16] __thiscall
btConvexHullInternal::getCoordinates(btConvexHullInternal *this,Vertex *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x74) < 0) {
    fVar4 = (float)Int128::toScalar();
    fVar3 = (float)Int128::toScalar();
    iVar1 = *(int *)(param_1 + 0x74);
    *(float *)((long)&local_58 + (long)*(int *)(this + 0xa8) * 4) = fVar4 / fVar3;
    if (-1 < iVar1) goto LAB_00fa2b2c;
    fVar4 = (float)Int128::toScalar();
    fVar3 = (float)Int128::toScalar();
    iVar1 = *(int *)(param_1 + 0x74);
    *(float *)((long)&local_58 + (long)*(int *)(this + 0xac) * 4) = fVar4 / fVar3;
    if (iVar1 < 0) {
      fVar4 = (float)Int128::toScalar();
      fVar3 = (float)Int128::toScalar();
      fVar4 = fVar4 / fVar3;
      goto LAB_00fa2b48;
    }
  }
  else {
    *(float *)((long)&local_58 + (long)*(int *)(this + 0xa8) * 4) = (float)*(int *)(param_1 + 0x68);
LAB_00fa2b2c:
    *(float *)((long)&local_58 + (long)*(int *)(this + 0xac) * 4) = (float)*(int *)(param_1 + 0x6c);
  }
  fVar4 = (float)*(int *)(param_1 + 0x70);
LAB_00fa2b48:
  uVar7 = *(undefined8 *)this;
  uVar8 = *(undefined4 *)(this + 8);
  *(float *)((long)&local_58 + (long)*(int *)(this + 0xa4) * 4) = fVar4;
  uVar5 = *(undefined8 *)(this + 0x10);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    auVar6._0_4_ = (float)uVar5 + (float)local_58 * (float)uVar7;
    auVar6._4_4_ = (float)((ulong)uVar5 >> 0x20) +
                   (float)((ulong)local_58 >> 0x20) * (float)((ulong)uVar7 >> 0x20);
    NEON_fmadd(uVar8,local_50,*(undefined4 *)(this + 0x18));
    auVar6._8_8_ = 0;
    return auVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5,uVar7,uVar8,local_50,*(undefined4 *)(this + 0x18));
}


