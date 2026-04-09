// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findJointTransforms
// Entry Point: 009b4cec
// Size: 320 bytes
// Signature: undefined __cdecl findJointTransforms(TransformGroup * param_1, TransformGroup * * param_2, TransformGroup * * param_3)


/* ScenegraphPhysicsUtil::findJointTransforms(TransformGroup*, TransformGroup*&, TransformGroup*&)
    */

void ScenegraphPhysicsUtil::findJointTransforms
               (TransformGroup *param_1,TransformGroup **param_2,TransformGroup **param_3)

{
  long lVar1;
  TransformGroup *pTVar2;
  long lVar3;
  TransformGroup *pTVar4;
  ulong uVar5;
  
  *param_2 = (TransformGroup *)0x0;
  *param_3 = (TransformGroup *)0x0;
  pTVar4 = *(TransformGroup **)(param_1 + 0x20);
  if (pTVar4 == (TransformGroup *)0x0) goto LAB_009b4dbc;
  if (((byte)pTVar4[0x10] >> 5 & 1) == 0) {
LAB_009b4d24:
    pTVar2 = *param_2;
  }
  else {
    lVar1 = RawTransformGroup::getPhysicsObject();
    if (((*(uint *)(lVar1 + 8) >> 3 & 1) == 0) || ((*(uint *)(lVar1 + 8) & 0x600) == 0x400))
    goto LAB_009b4d24;
    *param_2 = pTVar4;
    pTVar2 = pTVar4;
  }
  if (pTVar2 == (TransformGroup *)0x0) {
    lVar1 = *(long *)(pTVar4 + 0x28);
    lVar3 = *(long *)(pTVar4 + 0x30);
    if ((int)((ulong)(lVar3 - lVar1) >> 3) != 0) {
      uVar5 = 0;
      do {
        pTVar2 = *(TransformGroup **)(lVar1 + uVar5 * 8);
        if ((pTVar2 != param_1) && (((byte)pTVar2[0x10] >> 5 & 1) != 0)) {
          lVar1 = RawTransformGroup::getPhysicsObject();
          if (((*(uint *)(lVar1 + 8) >> 3 & 1) != 0) && ((*(uint *)(lVar1 + 8) & 0x600) != 0x400)) {
            *param_2 = pTVar2;
            break;
          }
          lVar1 = *(long *)(pTVar4 + 0x28);
          lVar3 = *(long *)(pTVar4 + 0x30);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < ((ulong)(lVar3 - lVar1) >> 3 & 0xffffffff));
    }
  }
LAB_009b4dbc:
  lVar1 = *(long *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(lVar3 - lVar1) >> 3) != 0) {
    uVar5 = 0;
    do {
      pTVar4 = *(TransformGroup **)(lVar1 + uVar5 * 8);
      if (((byte)pTVar4[0x10] >> 5 & 1) != 0) {
        lVar1 = RawTransformGroup::getPhysicsObject();
        if (((*(uint *)(lVar1 + 8) >> 3 & 1) != 0) && ((*(uint *)(lVar1 + 8) & 0x600) != 0x400)) {
          *param_3 = pTVar4;
          return;
        }
        lVar1 = *(long *)(param_1 + 0x28);
        lVar3 = *(long *)(param_1 + 0x30);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < ((ulong)(lVar3 - lVar1) >> 3 & 0xffffffff));
  }
  return;
}


