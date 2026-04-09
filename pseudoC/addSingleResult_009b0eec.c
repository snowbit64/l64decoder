// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009b0eec
// Size: 220 bytes
// Signature: undefined __cdecl addSingleResult(btManifoldPoint * param_1, btCollisionObjectWrapper * param_2, int param_3, int param_4, btCollisionObjectWrapper * param_5, int param_6, int param_7)


/* Bt2SceneQueryUtil::ContactResultCallback::addSingleResult(btManifoldPoint&,
   btCollisionObjectWrapper const*, int, int, btCollisionObjectWrapper const*, int, int) */

undefined  [16]
Bt2SceneQueryUtil::ContactResultCallback::addSingleResult
          (btManifoldPoint *param_1,btCollisionObjectWrapper *param_2,int param_3,int param_4,
          btCollisionObjectWrapper *param_5,int param_6,int param_7)

{
  ulong uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  
  if (0.0 <= *(float *)(param_2 + 0x50)) goto LAB_009b0fb8;
  lVar4 = *(long *)((ulong)(uint)param_3 + 0x10);
  if (lVar4 == *(long *)(param_1 + 0x18)) {
    lVar4 = *(long *)((ulong)(uint)param_6 + 0x10);
    if (*(long *)(param_1 + 0x20) == lVar4) goto LAB_009b0fb8;
    puVar3 = *(uint **)(lVar4 + 0x108);
    if ((puVar3 != (uint *)0x0) && ((*puVar3 & 0x101) == 1)) {
      if ((*puVar3 >> 3 & 1) != 0) goto LAB_009b0f7c;
LAB_009b0f44:
      uVar2 = 0xffffffff;
      goto LAB_009b0f80;
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == lVar4) goto LAB_009b0fb8;
    puVar3 = *(uint **)(lVar4 + 0x108);
    if ((puVar3 != (uint *)0x0) && ((*puVar3 & 0x101) == 1)) {
      if ((*puVar3 >> 3 & 1) == 0) goto LAB_009b0f44;
LAB_009b0f7c:
      uVar2 = puVar3[8];
LAB_009b0f80:
      uVar1 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                        (*(long **)(param_1 + 0x28),puVar3[4],uVar2,lVar4,0,(ulong)(uint)param_6,
                         param_7);
      if ((uVar1 & 1) == 0) {
        param_1[0x3c] = (btManifoldPoint)0x1;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
  }
  *(long *)(param_1 + 0x20) = lVar4;
LAB_009b0fb8:
  return ZEXT816(0);
}


