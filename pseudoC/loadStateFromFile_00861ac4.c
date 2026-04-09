// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadStateFromFile
// Entry Point: 00861ac4
// Size: 340 bytes
// Signature: undefined __thiscall loadStateFromFile(DensityMapHeightUpdater * this, char * param_1)


/* DensityMapHeightUpdater::loadStateFromFile(char const*) */

uint __thiscall
DensityMapHeightUpdater::loadStateFromFile(DensityMapHeightUpdater *this,char *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  DomXMLFile aDStack_120 [216];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_120);
                    /* try { // try from 00861af8 to 00861b07 has its CatchHandler @ 00861c1c */
  uVar3 = DomXMLFile::loadFromFile(aDStack_120,param_1,true);
  if ((uVar3 & 1) != 0) {
    uVar1 = *(uint *)(*(long *)(this + 0xa40) + 0x6c);
                    /* try { // try from 00861b1c to 00861b1f has its CatchHandler @ 00861c18 */
    uVar4 = DensityMap::getSquareSize();
                    /* try { // try from 00861b28 to 00861bdb has its CatchHandler @ 00861c20 */
    iVar5 = Properties::getInt((Properties *)aDStack_120,
                               "densityMapHeightUpdater#applyUpdateCurrentIndex",
                               *(int *)(this + 0xc54));
    uVar7 = 0;
    if (uVar1 != 0) {
      uVar7 = uVar4 / uVar1;
    }
    if (0x3f < uVar7) {
      uVar7 = 0x40;
    }
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar4 / uVar7;
    }
    if ((int)(uVar1 * uVar1) <= iVar5) {
      iVar5 = -1;
    }
    *(int *)(this + 0xc54) = iVar5;
    uVar6 = Properties::getUInt((Properties *)aDStack_120,"densityMapHeightUpdater#applyUpdateType",
                                *(uint *)(this + 0xc58));
    *(undefined4 *)(this + 0xc58) = uVar6;
    uVar6 = Properties::getInt((Properties *)aDStack_120,
                               "densityMapHeightUpdater#applyUpdateDeltaDensity",
                               *(int *)(this + 0xc5c));
    *(undefined4 *)(this + 0xc5c) = uVar6;
    uVar6 = Properties::getInt((Properties *)aDStack_120,
                               "densityMapHeightUpdater#applyUpdateHeightLimit",
                               *(int *)(this + 0xc60));
    *(undefined4 *)(this + 0xc60) = uVar6;
    uVar7 = Properties::getBoolDefault
                      ((Properties *)aDStack_120,
                       "densityMapHeightUpdater#applyUpdateUseCollisionMap",
                       *(int *)(this + 0xc64) != 0);
    *(uint *)(this + 0xc64) = uVar7 & 1;
    uVar6 = Properties::getFloat
                      ((Properties *)aDStack_120,
                       "densityMapHeightUpdater#applyUpdateMaxTimePerFrame",*(float *)(this + 0xc80)
                      );
    *(undefined4 *)(this + 0xc80) = uVar6;
  }
  DomXMLFile::~DomXMLFile(aDStack_120);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


