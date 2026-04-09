// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a56e0
// Entry Point: 007a56e0
// Size: 804 bytes
// Signature: undefined FUN_007a56e0(void)


void FUN_007a56e0(long param_1,char **param_2)

{
  UserAttributes *this;
  bool bVar1;
  int iVar2;
  UserAttribute *pUVar3;
  Logger *this_00;
  uint uVar4;
  char *pcVar5;
  float fVar6;
  
  pcVar5 = param_2[2];
  this = (UserAttributes *)(param_1 + 0x60);
  iVar2 = strcmp(pcVar5,"Integer");
  if (iVar2 == 0) {
    pUVar3 = (UserAttribute *)UserAttributes::addAttribute(this,*param_2,1);
    iVar2 = 0;
    switch(*(undefined4 *)(param_2 + 5)) {
    case 1:
    case 2:
      iVar2 = *(int *)(param_2 + 4);
      break;
    case 4:
      iVar2 = (int)*(float *)(param_2 + 4);
      break;
    case 5:
      iVar2 = (int)(double)param_2[4];
    }
    UserAttribute::setInt(pUVar3,iVar2);
    return;
  }
  iVar2 = strcmp(pcVar5,"Float");
  if (iVar2 == 0) {
    pUVar3 = (UserAttribute *)UserAttributes::addAttribute(this,*param_2,2);
    fVar6 = 0.0;
    switch(*(undefined4 *)(param_2 + 5)) {
    case 1:
      fVar6 = (float)*(int *)(param_2 + 4);
      break;
    case 2:
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 4));
      break;
    case 4:
      fVar6 = *(float *)(param_2 + 4);
      break;
    case 5:
      fVar6 = (float)(double)param_2[4];
    }
    UserAttribute::setFloat(pUVar3,fVar6);
    return;
  }
  iVar2 = strcmp(pcVar5,"String");
  if (iVar2 == 0) {
    pUVar3 = (UserAttribute *)UserAttributes::addAttribute(this,*param_2,3);
    if (*(int *)(param_2 + 5) == 6) {
      pcVar5 = param_2[4];
    }
    else {
      pcVar5 = "";
    }
    UserAttribute::setString(pUVar3,pcVar5);
    return;
  }
  iVar2 = strcmp(pcVar5,"Boolean");
  if (iVar2 != 0) {
    iVar2 = strcmp(pcVar5,"NodeId");
    if (iVar2 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 007a59c4 to 007a59cb has its CatchHandler @ 007a5a14 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007a59d0 to 007a59d3 has its CatchHandler @ 007a5a04 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error (script): Invalid user attribute type \"%s\" passed.\n",param_2[2]);
      return;
    }
    pUVar3 = (UserAttribute *)UserAttributes::addAttribute(this,*param_2,5);
    uVar4 = 0;
    switch(*(undefined4 *)(param_2 + 5)) {
    case 1:
    case 2:
      uVar4 = *(uint *)(param_2 + 4);
      break;
    case 4:
      uVar4 = (uint)*(float *)(param_2 + 4);
      break;
    case 5:
      uVar4 = (uint)(double)param_2[4];
    }
    UserAttribute::setNodeId(pUVar3,uVar4);
    return;
  }
  pUVar3 = (UserAttribute *)UserAttributes::addAttribute(this,*param_2,0);
  bVar1 = false;
  switch(*(undefined4 *)(param_2 + 5)) {
  case 1:
  case 2:
    bVar1 = *(int *)(param_2 + 4) == 0;
    break;
  case 3:
    bVar1 = *(char *)(param_2 + 4) == '\0';
    break;
  case 4:
    bVar1 = *(float *)(param_2 + 4) == 0.0;
    break;
  case 5:
    bVar1 = (double)param_2[4] == 0.0;
    break;
  default:
    goto switchD_007a587c_caseD_6;
  case 7:
  case 8:
    pcVar5 = param_2[4];
    goto LAB_007a5970;
  case 0xd:
    if ((char **)param_2[4] == (char **)0x0) {
      bVar1 = false;
      goto switchD_007a587c_caseD_6;
    }
    pcVar5 = *(char **)param_2[4];
LAB_007a5970:
    bVar1 = pcVar5 == (char *)0x0;
  }
  bVar1 = !bVar1;
switchD_007a587c_caseD_6:
  UserAttribute::setBool(pUVar3,bVar1);
  return;
}


