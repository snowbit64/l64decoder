// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadStateFromFile
// Entry Point: 00857ff0
// Size: 368 bytes
// Signature: undefined __thiscall loadStateFromFile(DensityMapUpdater * this, char * param_1)


/* DensityMapUpdater::loadStateFromFile(char const*) */

uint __thiscall DensityMapUpdater::loadStateFromFile(DensityMapUpdater *this,char *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  DomXMLFile aDStack_120 [216];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_120);
                    /* try { // try from 00858028 to 00858037 has its CatchHandler @ 00858168 */
  uVar3 = DomXMLFile::loadFromFile(aDStack_120,param_1,true);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 00858044 to 00858053 has its CatchHandler @ 00858160 */
    fVar5 = (float)Properties::getFloat
                             ((Properties *)aDStack_120,"densityMapUpdater#updateCycleTime",
                              *(float *)(this + 0x1058));
                    /* try { // try from 0085805c to 008580b7 has its CatchHandler @ 00858164 */
    uVar6 = Properties::getFloat
                      ((Properties *)aDStack_120,"densityMapUpdater#currentUpdateTime",
                       *(float *)(this + 0x1054));
    fVar7 = 0.0;
    *(undefined4 *)(this + 0x1054) = uVar6;
    *(float *)(this + 0x1058) = fVar5;
    if (0.0 < fVar5) {
      fVar7 = ((float)(ulong)(uint)(*(int *)(this + 0x38) * *(int *)(this + 0x38)) / fVar5) * 1.33;
    }
    *(float *)(this + 0x1064) = fVar7;
    iVar4 = Properties::getInt((Properties *)aDStack_120,"densityMapUpdater#currentUpdateIndex",
                               *(int *)(this + 0x105c));
    iVar1 = *(int *)(this + 0x38) * *(int *)(this + 0x38);
    if (iVar1 <= iVar4) {
      iVar4 = -1;
    }
    *(int *)(this + 0x105c) = iVar4;
                    /* try { // try from 008580d0 to 0085811f has its CatchHandler @ 0085816c */
    uVar6 = Properties::getFloat
                      ((Properties *)aDStack_120,"densityMapUpdater#numCellsToUpdate",
                       *(float *)(this + 0x1060));
    uVar6 = NEON_fmin(uVar6,0x3f800000);
    *(undefined4 *)(this + 0x1060) = uVar6;
    iVar4 = Properties::getInt((Properties *)aDStack_120,"densityMapUpdater#applyUpdateCurrentIndex"
                               ,*(int *)(this + 0x1078));
    if (iVar1 <= iVar4) {
      iVar4 = -1;
    }
    *(int *)(this + 0x1078) = iVar4;
    uVar6 = Properties::getFloat
                      ((Properties *)aDStack_120,"densityMapUpdater#applyUpdateMaxTimePerFrame",
                       *(float *)(this + 0x1088));
    *(undefined4 *)(this + 0x1088) = uVar6;
  }
  DomXMLFile::~DomXMLFile(aDStack_120);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


