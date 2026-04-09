// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewDefaultAttachment
// Entry Point: 00cd6734
// Size: 48 bytes
// Signature: undefined NewDefaultAttachment(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::Filter::NewDefaultAttachment() const */

MessageQueue * CryptoPP::Filter::NewDefaultAttachment(void)

{
  MessageQueue *this;
  
  this = (MessageQueue *)operator_new(0xc0);
                    /* try { // try from 00cd674c to 00cd6753 has its CatchHandler @ 00cd6764 */
  MessageQueue::MessageQueue(this,0x100);
  return this;
}


