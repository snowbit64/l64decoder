// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792290
// Entry Point: 00792290
// Size: 440 bytes
// Signature: undefined FUN_00792290(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00792290(char **param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  size_t __n;
  I3DStreamingManager *this;
  int iVar5;
  bool bVar6;
  void *__dest;
  char *__s;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  
  if (*(int *)(param_1 + 5) == 8) {
    pcVar7 = param_1[4];
  }
  else {
    pcVar7 = (char *)0x0;
  }
  if (*(int *)(param_1 + 7) == 8) {
    pcVar9 = param_1[6];
    iVar5 = *(int *)(param_1 + 0xd);
    if (iVar5 == 0) goto LAB_00792304;
LAB_007922f4:
    if ((iVar5 == 3) && (*(char *)(param_1 + 0xc) != '\0')) goto LAB_00792304;
    bVar6 = false;
  }
  else {
    pcVar9 = (char *)0x0;
    iVar5 = *(int *)(param_1 + 0xd);
    if (iVar5 != 0) goto LAB_007922f4;
LAB_00792304:
    bVar6 = true;
  }
  cVar1 = *(char *)(param_1 + 8);
  cVar2 = *(char *)(param_1 + 10);
  puVar4 = (undefined8 *)operator_new(0x38);
  __s = param_1[2];
  *puVar4 = &PTR__ScriptingStreamingCallback_00fdb7e8;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00792440 to 00792447 has its CatchHandler @ 00792448 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)puVar4 + 9);
    *(char *)(puVar4 + 1) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_007923c0;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00792384 to 0079238b has its CatchHandler @ 00792448 */
    __dest = operator_new(uVar8);
    puVar4[2] = __n;
    puVar4[3] = __dest;
    puVar4[1] = uVar8 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_007923c0:
  *(undefined *)((long)__dest + __n) = 0;
  puVar4[4] = pcVar7;
  puVar4[5] = pcVar9;
  puVar4[6] = ram0x021101b4;
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  uVar3 = I3DStreamingManager::addI3DLoadTask
                    (this,*param_1,cVar1 != '\0',cVar2 != '\0',(MeshSplitFileState *)(puVar4 + 6),
                     bVar6,(IStreamingCallback *)puVar4,false,false);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


