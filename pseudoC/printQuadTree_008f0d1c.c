// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printQuadTree
// Entry Point: 008f0d1c
// Size: 284 bytes
// Signature: undefined printQuadTree(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoQuadTree::printQuadTree() const */

void GeoQuadTree::printQuadTree(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long in_x0;
  char *pcVar4;
  Logger *this;
  QuadTreeNode *this_00;
  ulong uVar5;
  uint uVar6;
  
  this_00 = *(QuadTreeNode **)(in_x0 + 8);
  uVar1 = 2 << (ulong)(*(uint *)(this_00 + 0x2c) & 0x1f);
  uVar2 = uVar1 - 1;
  uVar5 = (ulong)uVar2;
  pcVar4 = (char *)operator_new__((ulong)(uVar2 * uVar1));
  QuadTreeNode::writeToBuffer(this_00,pcVar4,uVar1,uVar2);
  uVar6 = 0;
  do {
    pcVar4[uVar2 + uVar6] = '\0';
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008f0ddc to 008f0de7 has its CatchHandler @ 008f0e48 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 008f0de8 to 008f0def has its CatchHandler @ 008f0e38 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,
                      pcVar4 + uVar6);
    uVar6 = uVar6 + uVar1;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  operator_delete__(pcVar4);
  return;
}


