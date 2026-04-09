// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 009b0fcc
// Size: 380 bytes
// Signature: undefined __thiscall process(OBBOnEntityContactResultCallback * this, btBroadphaseProxy * param_1)


/* Bt2SceneQueryUtil::OBBOnEntityContactResultCallback::process(btBroadphaseProxy const*) */

undefined8 __thiscall
Bt2SceneQueryUtil::OBBOnEntityContactResultCallback::process
          (OBBOnEntityContactResultCallback *this,btBroadphaseProxy *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)param_1;
  if ((((lVar6 != *(long *)(this + 0x18)) && (this[0x3c] == (OBBOnEntityContactResultCallback)0x0))
      && (plVar4 = *(long **)(lVar6 + 0xc0),
         (ushort)(*(ushort *)(this + 10) & *(ushort *)((long)plVar4 + 10) |
                 *(ushort *)(this + 8) & *(ushort *)(plVar4 + 1)) != 0)) &&
     ((*(uint *)(this + 0x34) & *(uint *)(*plVar4 + 0xe0)) == *(uint *)(this + 0x38))) {
    fVar7 = (float)*(undefined8 *)(param_1 + 0x1c);
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
    local_3c = 0;
    local_4c = 0;
    fVar9 = (fVar7 + (float)*(undefined8 *)(param_1 + 0x2c)) * 0.5;
    fVar10 = (fVar8 + (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20)) * 0.5;
    local_48 = CONCAT44(fVar10,fVar9);
    local_40 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34)) * 0.5;
    local_58 = CONCAT44(fVar10 - fVar8,fVar9 - fVar7);
    local_50 = local_40 - *(float *)(param_1 + 0x24);
    uVar2 = MathUtil::obbAABBIntersect
                      ((float *)(this + 0x40),(float *)(this + 100),(float *)(this + 0x70),
                       (float *)&local_48,(float *)&local_58);
    if (((uVar2 & 1) != 0) && (*(long *)(this + 0x20) != lVar6)) {
      puVar5 = *(uint **)(lVar6 + 0x108);
      if ((puVar5 != (uint *)0x0) && ((*puVar5 & 0x101) == 1)) {
        if ((*puVar5 >> 3 & 1) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = puVar5[8];
        }
        uVar2 = (**(code **)(**(long **)(this + 0x28) + 0x20))
                          (*(long **)(this + 0x28),puVar5[4],uVar3,lVar6,0);
        if ((uVar2 & 1) == 0) {
          this[0x3c] = (OBBOnEntityContactResultCallback)0x1;
        }
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      }
      *(long *)(this + 0x20) = lVar6;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


