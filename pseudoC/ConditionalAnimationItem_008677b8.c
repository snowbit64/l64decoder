// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConditionalAnimationItem
// Entry Point: 008677b8
// Size: 148 bytes
// Signature: undefined __thiscall ConditionalAnimationItem(ConditionalAnimationItem * this, ConditionalAnimationPlayer * param_1)


/* ConditionalAnimationItem::ConditionalAnimationItem(ConditionalAnimationPlayer&) */

void __thiscall
ConditionalAnimationItem::ConditionalAnimationItem
          (ConditionalAnimationItem *this,ConditionalAnimationPlayer *param_1)

{
  *(ConditionalAnimationPlayer **)this = param_1;
  this[0xc] = (ConditionalAnimationItem)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0x3e4ccccd3e4ccccd;
                    /* try { // try from 008677fc to 00867803 has its CatchHandler @ 00867890 */
  ConditionalAnimationClipInfo::ConditionalAnimationClipInfo
            ((ConditionalAnimationClipInfo *)(this + 0x48));
                    /* try { // try from 00867808 to 0086780f has its CatchHandler @ 00867860 */
  ConditionalAnimationBlending::ConditionalAnimationBlending
            ((ConditionalAnimationBlending *)(this + 0x70));
                    /* try { // try from 00867814 to 00867817 has its CatchHandler @ 0086784c */
  ConditionalAnimationConditions::ConditionalAnimationConditions
            ((ConditionalAnimationConditions *)(this + 0x98));
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xbc] = (ConditionalAnimationItem)0x0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xb4) = 0x3f80000000000000;
  return;
}


