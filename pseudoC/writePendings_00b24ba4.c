// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writePendings
// Entry Point: 00b24ba4
// Size: 348 bytes
// Signature: undefined writePendings(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AsyncFileLogSink::writePendings() */

void AsyncFileLogSink::writePendings(void)

{
  uint uVar1;
  ACCESS_MODE AVar2;
  byte *pbVar3;
  long lVar4;
  bool bVar5;
  long in_x0;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  NativeFile aNStack_88 [40];
  byte *local_60;
  byte *local_58;
  undefined8 local_50;
  long local_48;
  byte *pbVar9;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x0;
  local_50 = 0;
                    /* try { // try from 00b24bd8 to 00b24bdf has its CatchHandler @ 00b24d0c */
  Mutex::enterCriticalSection();
  pbVar3 = *(byte **)(in_x0 + 0x50);
  pbVar9 = *(byte **)(in_x0 + 0x58);
  *(undefined8 *)(in_x0 + 0x50) = 0;
  local_50 = *(undefined8 *)(in_x0 + 0x60);
  *(undefined8 *)(in_x0 + 0x58) = 0;
  *(undefined8 *)(in_x0 + 0x60) = 0;
  local_60 = pbVar3;
  local_58 = pbVar9;
                    /* try { // try from 00b24bf8 to 00b24bff has its CatchHandler @ 00b24d08 */
  Mutex::leaveCriticalSection();
  if (pbVar3 == pbVar9) {
    if (pbVar3 == (byte *)0x0) goto LAB_00b24ca0;
  }
  else {
                    /* try { // try from 00b24c08 to 00b24c0f has its CatchHandler @ 00b24d00 */
    NativeFile::NativeFile(aNStack_88);
    AVar2 = (int)in_x0 + 9;
    if ((*(byte *)(in_x0 + 8) & 1) != 0) {
      AVar2 = (ACCESS_MODE)*(undefined8 *)(in_x0 + 0x18);
    }
                    /* try { // try from 00b24c24 to 00b24c33 has its CatchHandler @ 00b24d04 */
    uVar6 = NativeFile::open((char *)aNStack_88,AVar2,true);
    pbVar8 = pbVar3;
    if ((uVar6 & 1) == 0) {
      NativeFile::~NativeFile(aNStack_88);
      if (pbVar3 == (byte *)0x0) goto LAB_00b24ca0;
    }
    else {
      do {
        pbVar7 = *(byte **)(pbVar8 + 0x10);
        bVar5 = (*pbVar8 & 1) == 0;
        if (bVar5) {
          pbVar7 = pbVar8 + 1;
        }
        uVar1 = (uint)(*pbVar8 >> 1);
        if (!bVar5) {
          uVar1 = *(uint *)(pbVar8 + 8);
        }
                    /* try { // try from 00b24c58 to 00b24c5f has its CatchHandler @ 00b24d14 */
        NativeFile::write(aNStack_88,pbVar7,uVar1);
        pbVar8 = pbVar8 + 0x18;
      } while (pbVar8 != pbVar9);
                    /* try { // try from 00b24c70 to 00b24c77 has its CatchHandler @ 00b24d04 */
      NativeFile::close();
      NativeFile::~NativeFile(aNStack_88);
      if (pbVar3 == (byte *)0x0) goto LAB_00b24ca0;
      if (pbVar3 == pbVar9) goto LAB_00b24c94;
    }
    do {
      pbVar8 = pbVar9 + -0x18;
      if ((*pbVar8 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + -8));
      }
      pbVar9 = pbVar8;
    } while (pbVar8 != pbVar3);
  }
LAB_00b24c94:
  local_58 = pbVar3;
  operator_delete(pbVar3);
LAB_00b24ca0:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


