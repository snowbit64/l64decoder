// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWorldBoundingVolume
// Entry Point: 00a5a04c
// Size: 256 bytes
// Signature: undefined getWorldBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NoteNode::getWorldBoundingVolume() */

long NoteNode::getWorldBoundingVolume(void)

{
  char *pcVar1;
  long lVar2;
  long in_x0;
  float fVar3;
  float fVar4;
  uint local_4c;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(in_x0 + 0x40) >> 0xc & 1) != 0) {
    pcVar1 = (char *)(in_x0 + 0x159);
    if ((*(byte *)(in_x0 + 0x158) & 1) != 0) {
      pcVar1 = *(char **)(in_x0 + 0x168);
    }
    *(uint *)(in_x0 + 0x40) = *(uint *)(in_x0 + 0x40) & 0xffffefff;
    local_4c = 0;
    fVar3 = (float)FontOverlayRenderer::getTextWidth
                             (*(FontOverlayRenderer **)(in_x0 + 0x188),1.0,true,0,pcVar1);
    pcVar1 = (char *)(in_x0 + 0x159);
    if ((*(byte *)(in_x0 + 0x158) & 1) != 0) {
      pcVar1 = *(char **)(in_x0 + 0x168);
    }
    fVar4 = (float)FontOverlayRenderer::getTextHeight
                             (*(FontOverlayRenderer **)(in_x0 + 0x188),1.0,true,0,pcVar1,&local_4c);
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    RawTransformGroup::updateWorldTransformation();
    local_48 = *(undefined8 *)(in_x0 + 0xe8);
    local_40 = *(undefined4 *)(in_x0 + 0xf0);
    BoundingSphere::assign((BoundingSphere *)(in_x0 + 0x1a8),(Vector3 *)&local_48,fVar4 * 0.35);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return in_x0 + 0x1a8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


