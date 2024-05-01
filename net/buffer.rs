
struct BufferManager {
    buffer_addresses: Vec<usize>,
}

impl BufferManager {
    fn new() -> Self {
        BufferManager {
            buffer_addresses: Vec::new(),
        }
    }

    fn locate_buffer(&self, index: usize) -> Option<usize> {
        self.buffer_addresses.get(index).cloned()
    }

    fn save_buffer(&mut self, address: usize) {
        self.buffer_addresses.push(address);
    }
}

fn main() {
    let mut buffer_manager = BufferManager::new();

    // Example usage
    buffer_manager.save_buffer(0x1000);
    buffer_manager.save_buffer(0x2000);

    let buffer_address = buffer_manager.locate_buffer(0);
    println!("Buffer address: {:?}", buffer_address);
}
