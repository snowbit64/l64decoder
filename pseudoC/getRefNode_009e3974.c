// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRefNode
// Entry Point: 009e3974
// Size: 284 bytes
// Signature: undefined getRefNode(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::getRefNode() */

void ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::getRefNode(void)

{
  char *pcVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  undefined8 uVar4;
  basic_string *in_x1;
  undefined auVar5 [16];
  byte local_70 [16];
  char *local_60;
  FailedReason aFStack_58 [4];
  bool local_54 [4];
  PathUtil local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x90);
  if (lVar3 == 0) {
    ProceduralPlacementManager::getAbsPath((ProceduralPlacementManager *)(in_x0 + 0x78),in_x1);
    local_54[0] = false;
    pcVar1 = (char *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      pcVar1 = local_40;
    }
                    /* try { // try from 009e39c8 to 009e39e7 has its CatchHandler @ 009e3ac4 */
    auVar5 = I3DLoadUtil::loadI3DFile
                       (pcVar1,true,true,(MeshSplitFileState *)0x0,true,local_54,true,aFStack_58);
    lVar3 = **(long **)(auVar5._0_8_ + 0x28);
    *(long *)(in_x0 + 0x90) = lVar3;
                    /* try { // try from 009e39f4 to 009e3a03 has its CatchHandler @ 009e3ac0 */
    PathUtil::makeUnifiedPath(local_50,auVar5._8_8_);
    pcVar1 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pcVar1 = local_60;
    }
    if (*(void **)(lVar3 + 0x100) != (void *)0x0) {
      operator_delete__(*(void **)(lVar3 + 0x100));
    }
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      uVar4 = 0;
    }
    else {
                    /* try { // try from 009e3a30 to 009e3a37 has its CatchHandler @ 009e3a90 */
      uVar4 = StringUtil::createStrCpy(pcVar1);
    }
    *(undefined8 *)(lVar3 + 0x100) = uVar4;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    lVar3 = *(long *)(in_x0 + 0x90);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


