// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNote
// Entry Point: 0093d164
// Size: 456 bytes
// Signature: undefined __cdecl startNote(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startNote(void*, char const*, char const**) */

void I3DSceneGraphFactory::startNote(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  NoteNode *this;
  char *pcVar5;
  long *plVar6;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  char **local_58;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)ExpatUtil::getAttr("name",param_3);
  local_50 = 0;
  uStack_48 = 0;
  pcVar5 = "Note";
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
  }
  local_40 = (char *)0x0;
                    /* try { // try from 0093d1b4 to 0093d1c7 has its CatchHandler @ 0093d370 */
  StringUtil::convertAsciiToUtf8(pcVar5,(basic_string *)&local_50,false);
  StringUtil::decodeHtmlSpecialCharactersInPlace((basic_string *)&local_50);
  local_58 = param_3;
                    /* try { // try from 0093d1cc to 0093d1d3 has its CatchHandler @ 0093d36c */
  this = (NoteNode *)operator_new(0x1d0);
  pcVar5 = (char *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pcVar5 = local_40;
  }
                    /* try { // try from 0093d1f4 to 0093d1f7 has its CatchHandler @ 0093d330 */
  NoteNode::NoteNode(this,pcVar5,*(STREAM_QUEUE *)((long)param_1 + 0x254));
                    /* try { // try from 0093d1f8 to 0093d217 has its CatchHandler @ 0093d36c */
  readTransformGroup((I3DReader *)&local_58,(I3DLoad *)param_1,(TransformGroup *)this,false,false,
                     true,false);
                    /* try { // try from 0093d218 to 0093d227 has its CatchHandler @ 0093d32c */
  pcVar5 = (char *)ExpatUtil::getAttr("text",param_3);
  if (pcVar5 != (char *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 0093d234 to 0093d267 has its CatchHandler @ 0093d33c */
    StringUtil::convertAsciiToUtf8(pcVar5,(basic_string *)&local_70,false);
    StringUtil::decodeHtmlSpecialCharactersInPlace((basic_string *)&local_70);
    NoteNode::setText((char *)this);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
                    /* try { // try from 0093d27c to 0093d29f has its CatchHandler @ 0093d374 */
  pcVar5 = (char *)ExpatUtil::getAttr("color",local_58);
  if (pcVar5 != (char *)0x0) {
    uVar2 = StringUtil::strtouint(pcVar5);
    NoteNode::setColor(this,uVar2,*(STREAM_QUEUE *)((long)param_1 + 0x254));
  }
                    /* try { // try from 0093d2a4 to 0093d2eb has its CatchHandler @ 0093d378 */
  pcVar5 = (char *)ExpatUtil::getAttr("fixedSize",local_58);
  if (pcVar5 != (char *)0x0) {
    iVar3 = strcasecmp(pcVar5,"false");
    NoteNode::setFixedSize(this,iVar3 != 0);
  }
  plVar6 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
  (**(code **)(*plVar6 + 0x18))(plVar6,this,0xffffffff);
  *(NoteNode **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


