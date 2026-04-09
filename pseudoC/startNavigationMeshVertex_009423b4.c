// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startNavigationMeshVertex
// Entry Point: 009423b4
// Size: 164 bytes
// Signature: undefined __cdecl startNavigationMeshVertex(void * param_1, char * param_2, char * * param_3)


/* I3DShapePoolFactory::startNavigationMeshVertex(void*, char const*, char const**) */

void I3DShapePoolFactory::startNavigationMeshVertex(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  float local_44;
  float fStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)ExpatUtil::getAttr("p",param_3);
  if ((pcVar2 != (char *)0x0) && (*(long *)(*(long *)((long)param_1 + 0x270) + 0x48) != 0)) {
    lVar3 = StringUtil::atof(pcVar2,&local_44);
    lVar3 = StringUtil::atof((char *)(lVar3 + 1),&fStack_40);
    StringUtil::atof((char *)(lVar3 + 1),&local_3c);
    NavigationMesh::addVertex
              (*(NavigationMesh **)(*(long *)((long)param_1 + 0x270) + 0x48),local_44,fStack_40,
               local_3c);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


