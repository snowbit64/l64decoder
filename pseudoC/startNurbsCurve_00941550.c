// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNurbsCurve
// Entry Point: 00941550
// Size: 252 bytes
// Signature: undefined __cdecl startNurbsCurve(void * param_1, char * param_2, char * * param_3)


/* I3DShapePoolFactory::startNurbsCurve(void*, char const*, char const**) */

void I3DShapePoolFactory::startNurbsCurve(void *param_1,char *param_2,char **param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  *(undefined4 *)(*(long *)((long)param_1 + 0x270) + 0x1c) = 0;
  lVar2 = ExpatUtil::getAttr("name",param_3);
  pcVar3 = (char *)ExpatUtil::getAttr("shapeId",param_3);
  if ((lVar2 != 0) && (pcVar3 != (char *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(*(char **)((long)param_1 + 0x270));
    StringUtil::strtouint(pcVar3,(uint *)(*(long *)((long)param_1 + 0x270) + 0x1c));
  }
  *(undefined4 *)(*(long *)((long)param_1 + 0x270) + 0x40) = 1;
  pcVar3 = (char *)ExpatUtil::getAttr("form",param_3);
  if ((pcVar3 != (char *)0x0) && (iVar1 = strcmp(pcVar3,"open"), iVar1 == 0)) {
    *(undefined4 *)(*(long *)((long)param_1 + 0x270) + 0x40) = 0;
  }
  *(undefined4 *)(*(long *)((long)param_1 + 0x270) + 0x18) = 1;
  pcVar3 = (char *)ExpatUtil::getAttr("type",param_3);
  if ((pcVar3 != (char *)0x0) && (iVar1 = strcmp(pcVar3,"linear"), iVar1 == 0)) {
    *(undefined4 *)(*(long *)((long)param_1 + 0x270) + 0x18) = 0;
  }
  lVar2 = *(long *)((long)param_1 + 0x270);
  if (*(long *)(lVar2 + 0x30) != *(long *)(lVar2 + 0x28)) {
    *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x28);
  }
  return;
}


