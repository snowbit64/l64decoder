// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainProceduralPlacementMasks
// Entry Point: 0093af8c
// Size: 292 bytes
// Signature: undefined __cdecl startTerrainProceduralPlacementMasks(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainProceduralPlacementMasks(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainProceduralPlacementMasks
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  ProceduralPlacementManager *this;
  size_t __n;
  void *__dest;
  ulong uVar4;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)ExpatUtil::getAttr("blockMaskFileId",param_3);
  if (pcVar3 == (char *)0x0) goto LAB_0093b078;
  uVar2 = atoi(pcVar3);
  pcVar3 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar2);
  if (pcVar3 == (char *)0x0) goto LAB_0093b078;
  this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
  __n = strlen(pcVar3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0093b040;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_70 = uVar4 | 1;
    local_68 = __n;
    local_60 = __dest;
LAB_0093b040:
    memcpy(__dest,pcVar3,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0093b05c to 0093b067 has its CatchHandler @ 0093b0b0 */
  ProceduralPlacementManager::addBlockMask
            (this,(basic_string *)&local_70,
             (basic_string *)(*(long *)((long)param_1 + 0x280) + 0x208));
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0093b078:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


