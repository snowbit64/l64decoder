// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reload
// Entry Point: 0070e73c
// Size: 636 bytes
// Signature: undefined reload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystemSource::reload() */

void AnimalLocomotionSystemSource::reload(void)

{
  char *pcVar1;
  long lVar2;
  undefined4 *in_x0;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  basic_string local_218 [4];
  char *local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  void *local_1f0;
  DomXMLFile aDStack_1e8 [216];
  DomXMLFile aDStack_110 [216];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = (void *)0x0;
                    /* try { // try from 0070e770 to 0070e77f has its CatchHandler @ 0070e9f4 */
  PathUtil::getBasePath(in_x0 + 0xf56,(basic_string *)&local_200,true);
                    /* try { // try from 0070e780 to 0070e787 has its CatchHandler @ 0070e9ec */
  DomXMLFile::DomXMLFile(aDStack_110);
  pcVar1 = (char *)((long)in_x0 + 0x3d59);
  if ((*(byte *)(in_x0 + 0xf56) & 1) != 0) {
    pcVar1 = *(char **)(in_x0 + 0xf5a);
  }
                    /* try { // try from 0070e798 to 0070e8e3 has its CatchHandler @ 0070e9fc */
  uVar3 = DomXMLFile::loadFromFile(aDStack_110,pcVar1,true);
  if ((uVar3 & 1) != 0) {
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.wander#circleDistance",2.5);
    *in_x0 = uVar5;
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.wander#circleRadius",1.0);
    in_x0[1] = uVar5;
    fVar6 = (float)Properties::getFloat((Properties *)aDStack_110,"locomotion.wander#jitter",15.0);
    uVar5 = MathUtil::degreeToRadian(fVar6);
    in_x0[2] = uVar5;
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.speed#walk",2.5);
    in_x0[3] = uVar5;
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.speed#run",5.0);
    in_x0[4] = uVar5;
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.speed#walkRunThreshold",3.0);
    in_x0[5] = uVar5;
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.speed#minimum",1.0);
    in_x0[6] = uVar5;
    uVar5 = Properties::getFloat
                      ((Properties *)aDStack_110,"locomotion.avoidance#wallCircleDistance",2.0);
    in_x0[0xb] = uVar5;
    uVar5 = Properties::getFloat
                      ((Properties *)aDStack_110,"locomotion.avoidance#wallCircleRadius",2.0);
    in_x0[0xc] = uVar5;
    uVar5 = Properties::getFloat
                      ((Properties *)aDStack_110,"locomotion.avoidance#detectionDistance",4.0);
    in_x0[9] = uVar5;
    uVar5 = Properties::getFloat
                      ((Properties *)aDStack_110,"locomotion.avoidance#maxAnimalForce",5.0);
    in_x0[7] = uVar5;
    uVar5 = Properties::getFloat((Properties *)aDStack_110,"locomotion.avoidance#maxWallForce",8.0);
    in_x0[8] = uVar5;
    uVar5 = Properties::getFloat
                      ((Properties *)aDStack_110,"locomotion.general#suddenStopTime",400.0);
    in_x0[0xd] = uVar5;
                    /* try { // try from 0070e8e8 to 0070e8fb has its CatchHandler @ 0070e9e8 */
    lVar4 = DomXMLFile::getValue(aDStack_110,"locomotion.animation#filename",false);
    if (lVar4 != 0) {
                    /* try { // try from 0070e904 to 0070e90f has its CatchHandler @ 0070e9c4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_218);
                    /* try { // try from 0070e910 to 0070e91b has its CatchHandler @ 0070e9bc */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)local_218);
                    /* try { // try from 0070e91c to 0070e923 has its CatchHandler @ 0070e9b8 */
      DomXMLFile::DomXMLFile(aDStack_1e8);
      pcVar1 = (char *)((ulong)local_218 | 1);
      if (((byte)local_218[0] & 1) != 0) {
        pcVar1 = local_208;
      }
                    /* try { // try from 0070e93c to 0070e95f has its CatchHandler @ 0070e9c8 */
      uVar3 = DomXMLFile::loadFromFile(aDStack_1e8,pcVar1,true);
      if ((uVar3 & 1) != 0) {
        AnimalAnimationSystemSource::loadFromXml
                  ((AnimalAnimationSystemSource *)(in_x0 + 0xe),aDStack_1e8,"animation");
      }
      DomXMLFile::~DomXMLFile(aDStack_1e8);
      if (((byte)local_218[0] & 1) != 0) {
        operator_delete(local_208);
      }
    }
  }
  DomXMLFile::~DomXMLFile(aDStack_110);
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


