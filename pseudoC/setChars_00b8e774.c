// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setChars
// Entry Point: 00b8e774
// Size: 564 bytes
// Signature: undefined __thiscall setChars(Charset * this, uchar * param_1)


/* Preprocessor::Charset::setChars(unsigned char const*) */

void __thiscall Preprocessor::Charset::setChars(Charset *this,uchar *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  bVar2 = *param_1;
  if (bVar2 == 0) {
    return;
  }
  puVar1 = (uint *)(this + 4);
LAB_00b8e7cc:
  uVar7 = (ulong)bVar2;
  if ((bVar2 & 0x60) != 0) {
    if (((param_1[1] != 0x2d) || ((param_1[2] & 0x60) == 0)) || (param_1[2] < bVar2)) {
      uVar5 = 1 << (ulong)(bVar2 & 0x1f);
      puVar8 = (uint *)(this + (ulong)(bVar2 >> 5) * 4);
      goto switchD_00b8e84c_caseD_7;
    }
    do {
      uVar6 = (uint)uVar7;
      uVar9 = uVar7 >> 3 & 0x1c;
      uVar5 = uVar6 + 1;
      uVar7 = (ulong)uVar5;
      *(uint *)(this + uVar9) = *(uint *)(this + uVar9) | 1 << (ulong)(uVar6 & 0x1f);
    } while ((uVar5 & 0xff) <= (uint)param_1[2]);
    goto LAB_00b8e7c4;
  }
  if ((char)bVar2 < '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 == 0)) {
      pcVar4 = "Warning: Negated special sequences not allowed in charset specifications.\n";
      goto LAB_00b8e914;
    }
                    /* try { // try from 00b8e93c to 00b8e947 has its CatchHandler @ 00b8e9ac */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    pcVar4 = "Warning: Negated special sequences not allowed in charset specifications.\n";
LAB_00b8e978:
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_00b8e914:
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar4);
    return;
  }
  if (0xb < (bVar2 & 0x1f) - 1) goto LAB_00b8e7c4;
  uVar5 = 0x3ff0000;
  puVar8 = puVar1;
  switch(bVar2 & 0x1f) {
  default:
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 == 0)) {
      pcVar4 = "Warning: Special sequence not allowed in charset specifications.\n";
      goto LAB_00b8e914;
    }
                    /* try { // try from 00b8e964 to 00b8e96f has its CatchHandler @ 00b8e9a8 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    pcVar4 = "Warning: Special sequence not allowed in charset specifications.\n";
    goto LAB_00b8e978;
  case 3:
    *(uint *)this = *(uint *)this | 0x400;
  case 1:
    *puVar1 = *puVar1 | 1;
    goto switchD_00b8e84c_caseD_9;
  case 5:
    goto switchD_00b8e84c_caseD_5;
  case 6:
    *(ulong *)this = *(ulong *)this | 0x100000600;
    goto switchD_00b8e84c_caseD_5;
  case 7:
    break;
  case 9:
    goto switchD_00b8e84c_caseD_9;
  case 10:
    uVar5 = 0x400;
    puVar8 = (uint *)this;
  }
switchD_00b8e84c_caseD_7:
  *puVar8 = *puVar8 | uVar5;
LAB_00b8e7c4:
  param_1 = param_1 + 1;
  bVar2 = *param_1;
  if (bVar2 == 0) {
    return;
  }
  goto LAB_00b8e7cc;
switchD_00b8e84c_caseD_5:
  uVar7 = 0x41;
  do {
    uVar6 = (uint)uVar7;
    lVar10 = (uVar7 >> 5) * 4;
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    *(uint *)(this + lVar10) = *(uint *)(this + lVar10) | 1 << (ulong)(uVar6 & 0x1f);
  } while (uVar5 != 0x5b);
  uVar7 = 0x61;
  do {
    uVar6 = (uint)uVar7;
    lVar10 = (uVar7 >> 5) * 4;
    uVar5 = uVar6 + 1;
    uVar7 = (ulong)uVar5;
    *(uint *)(this + lVar10) = *(uint *)(this + lVar10) | 1 << (ulong)(uVar6 & 0x1f);
  } while (uVar5 != 0x7b);
  goto LAB_00b8e7c4;
switchD_00b8e84c_caseD_9:
  uVar5 = 0x200;
  puVar8 = (uint *)this;
  goto switchD_00b8e84c_caseD_7;
}


