// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: finishStreaming
// Entry Point: 009071fc
// Size: 564 bytes
// Signature: undefined __thiscall finishStreaming(I3DManager * this, uint param_1, TransformGroup * param_2, FailedReason param_3)


/* I3DManager::finishStreaming(unsigned int, TransformGroup*, IStreamingCallback::FailedReason) */

void __thiscall
I3DManager::finishStreaming
          (I3DManager *this,uint param_1,TransformGroup *param_2,FailedReason param_3)

{
  ScenegraphNode *pSVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  Logger *this_00;
  ScenegraphNode **ppSVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  ScenegraphNode **ppSVar9;
  
  if ((param_3 != 0) && (param_2 != (TransformGroup *)0x0)) {
    (**(code **)(*(long *)param_2 + 8))(param_2);
    param_2 = (TransformGroup *)0x0;
  }
  plVar7 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  if (plVar7 != plVar2) {
    ppSVar9 = (ScenegraphNode **)0x0;
    do {
      pcVar6 = "Error: Failed to load i3d file \'%s\'.\n";
      lVar8 = *plVar7;
      if (ppSVar9 == (ScenegraphNode **)0x0) {
        ppSVar9 = *(ScenegraphNode ***)(lVar8 + 8);
        if (ppSVar9 != (ScenegraphNode **)0x0) {
          if (*(uint *)((long)ppSVar9 + 0x14) == param_1) {
            *ppSVar9 = (ScenegraphNode *)param_2;
            *(undefined *)(ppSVar9 + 1) = 1;
            *(FailedReason *)((long)ppSVar9 + 0xc) = param_3;
            *(undefined4 *)((long)ppSVar9 + 0x14) = 0;
            if (param_3 == 3) {
              if ((LogManager::getInstance()::singletonLogManager & 1) == 0) {
                iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,
                                            "Error: Failed to load i3d file \'%s\'.\n");
                if (iVar3 == 0) {
                  pcVar6 = "Error: Failed to load i3d file \'%s\'.\n";
                }
                else {
                    /* try { // try from 0090739c to 009073a3 has its CatchHandler @ 00907434 */
                  this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009073a8 to 009073ab has its CatchHandler @ 00907430 */
                  Logger::Logger(this_00);
                  pcVar6 = "Error: Failed to load i3d file \'%s\'.\n";
LAB_009073b4:
                  LogManager::getInstance()::singletonLogManager = this_00;
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
              }
            }
            else {
              if (param_3 != 2) goto LAB_0090727c;
              pcVar6 = "Error: I3D file \'%s\' not found.\n";
              if ((LogManager::getInstance()::singletonLogManager & 1) == 0) {
                iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,
                                            "Error: I3D file \'%s\' not found.\n");
                if (iVar3 != 0) {
                    /* try { // try from 00907310 to 00907317 has its CatchHandler @ 00907448 */
                  this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0090731c to 0090731f has its CatchHandler @ 00907438 */
                  Logger::Logger(this_00);
                  pcVar6 = "Error: I3D file \'%s\' not found.\n";
                  goto LAB_009073b4;
                }
                pcVar6 = "Error: I3D file \'%s\' not found.\n";
              }
            }
            pSVar1 = (ScenegraphNode *)((long)ppSVar9 + 0x19);
            if ((*(byte *)(ppSVar9 + 3) & 1) != 0) {
              pSVar1 = ppSVar9[5];
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6,pSVar1
                              );
            goto LAB_0090727c;
          }
          ppSVar9 = (ScenegraphNode **)0x0;
        }
      }
      else {
LAB_0090727c:
        if (*(ScenegraphNode ***)(lVar8 + 8) == ppSVar9) {
          if ((*ppSVar9 == (ScenegraphNode *)0x0) || (*(long *)(lVar8 + 0x20) == 0)) {
            *(undefined8 *)(lVar8 + 0x28) = 0;
            ppSVar5 = ppSVar9;
          }
          else {
            uVar4 = CloneUtil::cloneScenegraphNode
                              (*ppSVar9,*(bool *)(lVar8 + 0x10),*(bool *)(lVar8 + 0x11),
                               *(MeshSplitFileState **)(lVar8 + 0x18));
            *(undefined8 *)(lVar8 + 0x28) = uVar4;
            ppSVar5 = *(ScenegraphNode ***)(lVar8 + 8);
          }
          iVar3 = *(int *)((long)ppSVar5 + 0xc);
          *(undefined *)(lVar8 + 0x30) = 1;
          *(int *)(lVar8 + 0x3c) = iVar3;
          if (iVar3 != 0) {
            unrefSharedI3D(this,(SharedI3D *)ppSVar5);
            *(undefined8 *)(lVar8 + 8) = 0;
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  return;
}


