// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClone
// Entry Point: 009e3ae0
// Size: 236 bytes
// Signature: undefined __thiscall getClone(ProceduralPlacementReferenceObjectDesc * this, MeshSplitFileState * param_1)


/* ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::getClone(MeshSplitFileState
   const*) */

long __thiscall
ProceduralPlacementRule::ProceduralPlacementReferenceObjectDesc::getClone
          (ProceduralPlacementReferenceObjectDesc *this,MeshSplitFileState *param_1)

{
  char *pcVar1;
  long lVar2;
  ScenegraphNode *pSVar3;
  long lVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  byte local_68 [16];
  char *local_58;
  PathUtil local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ProceduralPlacementManager::getAbsPath
            ((ProceduralPlacementManager *)(this + 0x78),(basic_string *)param_1);
                    /* try { // try from 009e3b14 to 009e3b1b has its CatchHandler @ 009e3c04 */
  pSVar3 = (ScenegraphNode *)getRefNode();
                    /* try { // try from 009e3b1c to 009e3b2b has its CatchHandler @ 009e3c00 */
  auVar6 = CloneUtil::cloneScenegraphNode(pSVar3,true,true,param_1);
  lVar4 = auVar6._0_8_;
                    /* try { // try from 009e3b30 to 009e3b3f has its CatchHandler @ 009e3bfc */
  PathUtil::makeUnifiedPath(local_50,auVar6._8_8_);
  pcVar1 = (char *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pcVar1 = local_58;
  }
  if (*(void **)(lVar4 + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(lVar4 + 0x100));
  }
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    uVar5 = 0;
  }
  else {
                    /* try { // try from 009e3b6c to 009e3b73 has its CatchHandler @ 009e3bcc */
    uVar5 = StringUtil::createStrCpy(pcVar1);
  }
  *(undefined8 *)(lVar4 + 0x100) = uVar5;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


