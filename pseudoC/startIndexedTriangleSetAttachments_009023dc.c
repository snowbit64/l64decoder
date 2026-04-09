// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startIndexedTriangleSetAttachments
// Entry Point: 009023dc
// Size: 664 bytes
// Signature: undefined __cdecl startIndexedTriangleSetAttachments(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startIndexedTriangleSetAttachments(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startIndexedTriangleSetAttachments
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  undefined auVar2 [16];
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 extraout_x1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined auVar13 [16];
  uint local_2c;
  long local_28;
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar12 = *(long *)((long)param_1 + 0x278);
  if (*(long *)(lVar12 + 8) != 0) {
    if (*(char *)(lVar12 + 0x79) == '\0') {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 009025a8 to 009025b3 has its CatchHandler @ 0090267c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar5 = (ulong)*(uint *)(lVar12 + 0x7c);
      lVar8 = lVar12 + 0x51;
      if ((*(byte *)(lVar12 + 0x50) & 1) != 0) {
        lVar8 = *(long *)(lVar12 + 0x60);
      }
      pcVar7 = "Error: Unexpected attachments in triangle set \'%s\' (%u).\n";
    }
    else {
      uVar5 = ExpatUtil::getUIntAttr("count",&local_2c,param_3);
      if ((uVar5 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 009025f0 to 009025fb has its CatchHandler @ 00902678 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        uVar5 = (ulong)*(uint *)(lVar12 + 0x7c);
        lVar8 = lVar12 + 0x51;
        if ((*(byte *)(lVar12 + 0x50) & 1) != 0) {
          lVar8 = *(long *)(lVar12 + 0x60);
        }
        pcVar7 = "Error: Missing attachments count attribute in triangle set \'%s\' (%u).\n";
      }
      else {
        uVar3 = IndexedTriangleSet::getNumSubsets();
        uVar5 = (ulong)local_2c;
        if (local_2c <= uVar3) {
          lVar8 = *(long *)(lVar12 + 0x28);
          lVar9 = *(long *)(lVar12 + 0x30) - lVar8 >> 4;
          uVar10 = lVar9 * -0x3333333333333333;
          if (uVar5 <= uVar10) {
            if (uVar5 <= uVar10 && uVar10 - uVar5 != 0) {
              *(ulong *)(lVar12 + 0x30) = lVar8 + uVar5 * 0x50;
            }
          }
          else {
            std::__ndk1::
            vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData>>
            ::__append((vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData>>
                        *)(long *)(lVar12 + 0x28),uVar5 + lVar9 * 0x3333333333333333);
            uVar5 = (ulong)local_2c;
          }
          plVar6 = (long *)(lVar12 + 0x10);
          uVar11 = *(long *)(lVar12 + 0x18) - *plVar6 >> 2;
          uVar10 = uVar5 - uVar11;
          auVar2._8_8_ = uVar10;
          auVar2._0_8_ = plVar6;
          auVar13._8_8_ = uVar10;
          auVar13._0_8_ = plVar6;
          if (uVar5 < uVar11 || uVar10 == 0) {
            if (uVar5 < uVar11) {
              *(ulong *)(lVar12 + 0x18) = *plVar6 + uVar5 * 4;
              auVar13 = auVar2;
            }
          }
          else {
            auVar13 = std::__ndk1::
                      vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                      ::__append((vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                                  *)plVar6,uVar10);
          }
          *(undefined4 *)(lVar12 + 0x4c) = 0;
          goto LAB_00902500;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00902638 to 00902643 has its CatchHandler @ 00902674 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        uVar5 = (ulong)*(uint *)(lVar12 + 0x7c);
        lVar8 = lVar12 + 0x51;
        if ((*(byte *)(lVar12 + 0x50) & 1) != 0) {
          lVar8 = *(long *)(lVar12 + 0x60);
        }
        pcVar7 = "Error: Not enough subsets for the attachments in triangle set \'%s\' (%u).\n";
      }
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar7,lVar8,uVar5);
    plVar6 = *(long **)(lVar12 + 8);
    auVar13._8_8_ = extraout_x1;
    auVar13._0_8_ = plVar6;
    if (plVar6 != (long *)0x0) {
      auVar13 = (**(code **)(*plVar6 + 8))();
    }
    *(undefined8 *)(lVar12 + 8) = 0;
  }
LAB_00902500:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar13._0_8_,auVar13._8_8_);
}


