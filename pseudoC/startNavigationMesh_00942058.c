// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNavigationMesh
// Entry Point: 00942058
// Size: 576 bytes
// Signature: undefined __cdecl startNavigationMesh(void * param_1, char * param_2, char * * param_3)


/* I3DShapePoolFactory::startNavigationMesh(void*, char const*, char const**) */

void I3DShapePoolFactory::startNavigationMesh(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  char *__nptr;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  NavigationMesh *this;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar6 = *(long **)(*(long *)((long)param_1 + 0x270) + 0x48);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
    *(undefined8 *)(*(long *)((long)param_1 + 0x270) + 0x48) = 0;
  }
  lVar7 = ExpatUtil::getAttr("name",param_3);
  __nptr = (char *)ExpatUtil::getAttr("shapeId",param_3);
  pcVar8 = (char *)ExpatUtil::getAttr("cellSize",param_3);
  pcVar9 = (char *)ExpatUtil::getAttr("cellHeight",param_3);
  pcVar10 = (char *)ExpatUtil::getAttr("gridMinBound",param_3);
  pcVar11 = (char *)ExpatUtil::getAttr("gridMaxBound",param_3);
  pcVar12 = (char *)ExpatUtil::getAttr("vertices",param_3);
  pcVar13 = (char *)ExpatUtil::getAttr("nodes",param_3);
  pcVar14 = (char *)ExpatUtil::getAttr("edges",param_3);
  if ((((((lVar7 != 0) && (__nptr != (char *)0x0)) && (pcVar8 != (char *)0x0)) &&
       ((pcVar9 != (char *)0x0 && (pcVar10 != (char *)0x0)))) &&
      ((pcVar11 != (char *)0x0 && ((pcVar12 != (char *)0x0 && (pcVar13 != (char *)0x0)))))) &&
     (pcVar14 != (char *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(*(char **)((long)param_1 + 0x270));
    iVar2 = atoi(__nptr);
    *(int *)(*(long *)((long)param_1 + 0x270) + 0x1c) = iVar2;
    StringUtil::atof(pcVar8,&fStack_84);
    StringUtil::atof(pcVar9,&local_88);
    lVar7 = StringUtil::atof(pcVar10,&fStack_74);
    lVar7 = StringUtil::atof((char *)(lVar7 + 1),&fStack_70);
    StringUtil::atof((char *)(lVar7 + 1),&fStack_6c);
    lVar7 = StringUtil::atof(pcVar11,&fStack_80);
    lVar7 = StringUtil::atof((char *)(lVar7 + 1),&fStack_7c);
    StringUtil::atof((char *)(lVar7 + 1),&fStack_78);
    uVar3 = StringUtil::strtouint(pcVar12);
    uVar4 = StringUtil::strtouint(pcVar13);
    uVar5 = StringUtil::strtouint(pcVar14);
    this = (NavigationMesh *)operator_new(0x68);
                    /* try { // try from 00942240 to 00942257 has its CatchHandler @ 00942298 */
    NavigationMesh::NavigationMesh(this,fStack_84,local_88,&fStack_74,&fStack_80,uVar3,uVar4,uVar5);
    *(NavigationMesh **)(*(long *)((long)param_1 + 0x270) + 0x48) = this;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


