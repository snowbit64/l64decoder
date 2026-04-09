// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendUserReports
// Entry Point: 00c67744
// Size: 960 bytes
// Signature: undefined __thiscall sendUserReports(UserBlockManager * this, bool * param_1)


/* UserBlockManager::sendUserReports(bool volatile&) */

void __thiscall UserBlockManager::sendUserReports(UserBlockManager *this,bool *param_1)

{
  UserBlockManager *pUVar1;
  UserBlockManager *pUVar2;
  char cVar3;
  UserBlockManager UVar4;
  UserBlockManager UVar5;
  UserBlockManager UVar6;
  UserBlockManager UVar7;
  UserBlockManager UVar8;
  UserBlockManager UVar9;
  UserBlockManager UVar10;
  UserBlockManager UVar11;
  UserBlockManager UVar12;
  UserBlockManager UVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong local_328;
  undefined8 uStack_320;
  void *local_318;
  AndroidHTTPSRequest aAStack_310 [160];
  basic_string abStack_270 [128];
  long local_70;
  
  lVar14 = tpidr_el0;
  local_70 = *(long *)(lVar14 + 0x28);
  Event::wait((Event *)(this + 0x68),0xffffffff);
  cVar3 = *param_1;
  do {
    if (cVar3 != '\0') {
      if (*(long *)(lVar14 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Mutex::enterCriticalSection();
    if (*(double *)(this + 0x148) == 0.0 || this[0x154] != (UserBlockManager)0x0) {
      if ((*(double *)(this + 0x1a8) != 0.0) && (this[0x1b4] == (UserBlockManager)0x0)) {
        lVar17 = 1;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x208) != 0.0) && (this[0x214] == (UserBlockManager)0x0)) {
        lVar17 = 2;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x268) != 0.0) && (this[0x274] == (UserBlockManager)0x0)) {
        lVar17 = 3;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x2c8) != 0.0) && (this[0x2d4] == (UserBlockManager)0x0)) {
        lVar17 = 4;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x328) != 0.0) && (this[0x334] == (UserBlockManager)0x0)) {
        lVar17 = 5;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x388) != 0.0) && (this[0x394] == (UserBlockManager)0x0)) {
        lVar17 = 6;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 1000) != 0.0) && (this[0x3f4] == (UserBlockManager)0x0)) {
        lVar17 = 7;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x448) != 0.0) && (this[0x454] == (UserBlockManager)0x0)) {
        lVar17 = 8;
        goto LAB_00c67814;
      }
      if ((*(double *)(this + 0x4a8) != 0.0) && (this[0x4b4] == (UserBlockManager)0x0)) {
        lVar17 = 9;
        goto LAB_00c67814;
      }
      Mutex::leaveCriticalSection();
    }
    else {
      lVar17 = 0;
LAB_00c67814:
      *(int *)(this + lVar17 * 0x60 + 0x150) = *(int *)(this + lVar17 * 0x60 + 0x150) + 1;
      Mutex::leaveCriticalSection();
      puVar18 = &DAT_0050a39f;
      if (*(uint *)(this + lVar17 * 0x60 + 0x144) < 5) {
        puVar18 = &DAT_0053e4dc +
                  *(int *)(&DAT_0053e4dc + (long)(int)*(uint *)(this + lVar17 * 0x60 + 0x144) * 4);
      }
      pUVar1 = this + lVar17 * 0x60 + 0x129;
      if (((byte)this[lVar17 * 0x60 + 0x128] & 1) != 0) {
        pUVar1 = *(UserBlockManager **)(this + lVar17 * 0x60 + 0x138);
      }
      pvVar15 = (void *)HTTPUtil::encodeCGI((char *)pUVar1);
      pUVar1 = this + lVar17 * 0x60 + 0xf9;
      if (((byte)this[lVar17 * 0x60 + 0xf8] & 1) != 0) {
        pUVar1 = *(UserBlockManager **)(this + lVar17 * 0x60 + 0x108);
      }
      pUVar2 = this + lVar17 * 0x60 + 0x111;
      if (((byte)this[lVar17 * 0x60 + 0x110] & 1) != 0) {
        pUVar2 = *(UserBlockManager **)(this + lVar17 * 0x60 + 0x120);
      }
      FUN_00c67344(abStack_270,0x200,0x200,
                   "https://www.farming-simulator.com/api/reportUser.php?uid=<%s>&puid=<%s>&pid=<%d>&rid=<%s>&r=[%s]"
                   ,pUVar1,pUVar2,*(undefined4 *)(this + lVar17 * 0x60 + 0x140),pvVar15,puVar18);
      if (pvVar15 != (void *)0x0) {
        operator_delete__(pvVar15);
      }
      AndroidHTTPSRequest::AndroidHTTPSRequest(aAStack_310);
                    /* try { // try from 00c678d0 to 00c6790f has its CatchHandler @ 00c67b20 */
      AndroidHTTPSRequest::init((char *)aAStack_310,false,true);
      AndroidHTTPSRequest::setUserAgent(aAStack_310,"GIANTS Engine");
      AndroidHTTPSRequest::setReferer(aAStack_310,"http://www.farming-simulator.com/");
      AndroidHTTPSRequest::setCancelFlag(aAStack_310,param_1);
      local_328 = 0;
      uStack_320 = 0;
      local_318 = (void *)0x0;
                    /* try { // try from 00c67918 to 00c67943 has its CatchHandler @ 00c67b08 */
      uVar16 = AndroidHTTPSRequest::httpGET
                         ((char *)aAStack_310,abStack_270,(Range *)&local_328,(char *)0x0,
                          (uint *)0x0,(map *)0x0);
      Mutex::enterCriticalSection();
      if (((uVar16 & 1) != 0) || (5 < *(int *)(this + lVar17 * 0x60 + 0x150))) {
        this[lVar17 * 0x60 + 0x154] = (UserBlockManager)0x1;
      }
      this[lVar17 * 0x60 + 0x154] = (UserBlockManager)0x1;
      UVar4 = this[0x154];
      UVar5 = this[0x1b4];
      UVar6 = this[0x214];
      UVar7 = this[0x274];
      UVar8 = this[0x2d4];
      UVar9 = this[0x334];
      UVar10 = this[0x394];
      UVar11 = this[0x3f4];
      UVar12 = this[0x454];
      UVar13 = this[0x4b4];
                    /* try { // try from 00c679a0 to 00c679d7 has its CatchHandler @ 00c67b04 */
      Mutex::leaveCriticalSection();
      if ((((((UVar13 == (UserBlockManager)0x0) || (UVar12 == (UserBlockManager)0x0)) ||
            (UVar11 == (UserBlockManager)0x0)) ||
           ((UVar10 == (UserBlockManager)0x0 || (UVar9 == (UserBlockManager)0x0)))) ||
          ((UVar8 == (UserBlockManager)0x0 ||
           ((UVar7 == (UserBlockManager)0x0 || (UVar6 == (UserBlockManager)0x0)))))) ||
         ((UVar5 == (UserBlockManager)0x0 || (UVar4 == (UserBlockManager)0x0)))) {
        Event::post();
      }
      if ((local_328 & 1) != 0) {
        operator_delete(local_318);
      }
      AndroidHTTPSRequest::~AndroidHTTPSRequest(aAStack_310);
    }
    Event::wait((Event *)(this + 0x68),0xffffffff);
    cVar3 = *param_1;
  } while( true );
}


