// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColor
// Entry Point: 00a59994
// Size: 552 bytes
// Signature: undefined __thiscall setColor(NoteNode * this, uint param_1, STREAM_QUEUE param_2)


/* NoteNode::setColor(unsigned int, StreamManager::STREAM_QUEUE) */

void __thiscall NoteNode::setColor(NoteNode *this,uint param_1,STREAM_QUEUE param_2)

{
  long lVar1;
  MaterialManager *this_00;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  fVar3 = (float)(ulong)(param_1 & 0xff) / 255.0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(uint *)(this + 0x170) = param_1;
  if (fVar3 <= 0.04045) {
    fVar3 = fVar3 / 12.92;
  }
  else {
    fVar3 = powf((fVar3 + 0.055) / 1.055,2.4);
  }
  fVar4 = (float)(ulong)(param_1 >> 8 & 0xff) / 255.0;
  local_58 = fVar3;
  if (fVar4 <= 0.04045) {
    fVar4 = fVar4 / 12.92;
  }
  else {
    fVar4 = powf((fVar4 + 0.055) / 1.055,2.4);
  }
  local_50 = (float)(ulong)(param_1 >> 0x10 & 0xff) / 255.0;
  local_54 = fVar4;
  if (local_50 <= 0.04045) {
    local_50 = local_50 / 12.92;
  }
  else {
    local_50 = powf((local_50 + 0.055) / 1.055,2.4);
  }
  uVar5 = NEON_fmadd(fVar3,0x3e59b3d0,fVar4 * 0.7152);
  fVar3 = (float)NEON_fmadd(local_50,0x3d93dd98,uVar5);
  local_4c = 0x3f800000;
  uVar5 = 0;
  if (fVar3 <= 0.179) {
    uVar5 = 0x3f800000;
  }
  *(undefined4 *)(this + 0x174) = uVar5;
  this_00 = (MaterialManager *)MaterialManager::getInstance();
  uVar2 = MaterialManager::getSingleColorTexture(this_00,&local_58,0,param_2);
  *(undefined8 *)(this + 0x178) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


