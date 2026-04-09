// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backgroundLoadingThread
// Entry Point: 00afc7c8
// Size: 844 bytes
// Signature: undefined __cdecl backgroundLoadingThread(void * param_1, bool * param_2)


/* GiantsNotificationManager::backgroundLoadingThread(void*, bool volatile&) */

undefined8 GiantsNotificationManager::backgroundLoadingThread(void *param_1,bool *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  ulong local_380;
  undefined8 local_378;
  char *local_370;
  AndroidHTTPSRequest aAStack_368 [160];
  char acStack_2c8 [256];
  undefined auStack_1c8 [128];
  DomXMLFile aDStack_148 [216];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  AndroidHTTPSRequest::AndroidHTTPSRequest(aAStack_368);
                    /* try { // try from 00afc808 to 00afc853 has its CatchHandler @ 00afcb48 */
  AndroidHTTPSRequest::init((char *)aAStack_368,false,true);
  AndroidHTTPSRequest::setUserAgent(aAStack_368,"GIANTS Engine");
  AndroidHTTPSRequest::setReferer(aAStack_368,"http://www.farming-simulator.com/");
  AndroidHTTPSRequest::setVerbose(aAStack_368,false);
  AndroidHTTPSRequest::setCancelFlag(aAStack_368,param_2);
  local_380 = 0;
  local_378 = 0;
  local_370 = (char *)0x0;
  pbVar1 = (basic_string *)((long)param_1 + 9);
  if ((*(byte *)((long)param_1 + 8) & 1) != 0) {
    pbVar1 = *(basic_string **)((long)param_1 + 0x18);
  }
                    /* try { // try from 00afc870 to 00afc88b has its CatchHandler @ 00afcb20 */
  uVar6 = AndroidHTTPSRequest::httpGET
                    ((char *)aAStack_368,pbVar1,(Range *)&local_380,(char *)0x0,(uint *)0x0,
                     (map *)0x0);
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 00afc890 to 00afc897 has its CatchHandler @ 00afcb1c */
    DomXMLFile::DomXMLFile(aDStack_148);
    bVar3 = (local_380 & 1) != 0;
    pcVar7 = (char *)((ulong)&local_380 | 1);
    if (bVar3) {
      pcVar7 = local_370;
    }
    uVar5 = (uint)((byte)local_380 >> 1);
    if (bVar3) {
      uVar5 = (uint)local_378;
    }
                    /* try { // try from 00afc8bc to 00afc8d3 has its CatchHandler @ 00afcb18 */
    uVar6 = DomXMLFile::loadFromMemory(aDStack_148,pcVar7,uVar5,"notifications URL",false,false);
    if ((uVar6 & 1) != 0) {
                    /* try { // try from 00afc8d8 to 00afc8e7 has its CatchHandler @ 00afcb14 */
      iVar4 = DomXMLFile::getNumChildren(aDStack_148,"notifications");
      if (iVar4 != 0) {
        iVar14 = 0;
        do {
                    /* try { // try from 00afc930 to 00afc93b has its CatchHandler @ 00afcb2c */
          FUN_00afcb7c(auStack_1c8);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afc950 to 00afc95f has its CatchHandler @ 00afcb28 */
          pcVar7 = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afc978 to 00afc987 has its CatchHandler @ 00afcb44 */
          lVar8 = DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afc9a0 to 00afc9af has its CatchHandler @ 00afcb40 */
          uVar5 = Properties::getBoolDefault((Properties *)aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afc9c8 to 00afc9d7 has its CatchHandler @ 00afcb3c */
          pcVar9 = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afc9f0 to 00afc9ff has its CatchHandler @ 00afcb38 */
          pcVar10 = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afca18 to 00afca27 has its CatchHandler @ 00afcb34 */
          pcVar11 = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afca40 to 00afca4f has its CatchHandler @ 00afcb30 */
          pcVar12 = (char *)DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          FUN_00afcc20(acStack_2c8);
                    /* try { // try from 00afca68 to 00afcaa3 has its CatchHandler @ 00afcb50 */
          lVar13 = DomXMLFile::getValue(aDStack_148,acStack_2c8,false);
          if ((((pcVar7 != (char *)0x0) && (lVar8 != 0)) && (pcVar9 != (char *)0x0)) &&
             (((pcVar10 != (char *)0x0 && (pcVar11 != (char *)0x0)) &&
              ((pcVar12 != (char *)0x0 && (lVar13 != 0)))))) {
            if ((uVar5 & 1) == 0) {
              addExtraNotification();
            }
                    /* try { // try from 00afc8f8 to 00afc91f has its CatchHandler @ 00afcb50 */
            addNotification((char *)param_1,pcVar7,SUB81(lVar8,0),(char *)(ulong)(uVar5 & 1),pcVar9,
                            pcVar10,pcVar11,pcVar12,lVar13);
          }
          iVar14 = iVar14 + 1;
        } while (iVar4 != iVar14);
      }
    }
    DomXMLFile::~DomXMLFile(aDStack_148);
  }
                    /* try { // try from 00afcab0 to 00afcab7 has its CatchHandler @ 00afcb20 */
  addExtraNotification();
  *(undefined *)param_1 = 1;
  if ((local_380 & 1) != 0) {
    operator_delete(local_370);
  }
  AndroidHTTPSRequest::~AndroidHTTPSRequest(aAStack_368);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


