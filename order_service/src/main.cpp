#include "OrderService.h"

int main() {
    OrderService orderService;

    // Example order
    Order order("1", "2", "user123");

    // Create order
    orderService.createOrder(order);

    // Get order by ID
    Order retrievedOrder = orderService.getOrder("1");

    // Update order
    Order updatedOrder("1", "3", "user456");
    orderService.updateOrder("1", updatedOrder);

    // Delete order
    orderService.deleteOrder("1");

    return 0;
}
