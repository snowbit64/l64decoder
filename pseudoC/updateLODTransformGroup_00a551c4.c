// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLODTransformGroup
// Entry Point: 00a551c4
// Size: 164 bytes
// Signature: undefined updateLODTransformGroup(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::updateLODTransformGroup() */

void LightSource::updateLODTransformGroup(void)

{
  Node NVar1;
  Node *this;
  Node *pNVar2;
  uint uVar3;
  Node *in_x0;
  Node *pNVar4;
  float fVar5;
  
  if (((((byte)in_x0[0x40] >> 3 & 1) != 0) && (*(long *)(in_x0 + 0x160) == 0)) &&
     (pNVar4 = *(Node **)(in_x0 + 0x20), pNVar4 != (Node *)0x0)) {
    NVar1 = pNVar4[0x10];
    pNVar2 = in_x0;
    while (this = pNVar4, ((byte)NVar1 >> 6 & 1) == 0) {
      pNVar4 = *(Node **)(this + 0x20);
      if (pNVar4 == (Node *)0x0) {
        return;
      }
      NVar1 = pNVar4[0x10];
      pNVar2 = (Node *)this;
    }
    uVar3 = Node::getChildIndex(this,pNVar2);
    if ((uVar3 == 0) ||
       (fVar5 = (float)LODTransformGroup::getDistance((LODTransformGroup *)this,uVar3), fVar5 != 0.0
       )) {
      *(Node **)(in_x0 + 0x160) = this;
      *(uint *)(in_x0 + 0x168) = uVar3;
    }
    else {
      *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xfffffff7;
    }
  }
  return;
}


