def encode_rle(image):
    """
    Compress a 2D binary image using white-first RLE encoding.
    Black pixels are 0, white pixels are 1.

    Args:
        image: 2D list of 1s and 0s representing white and black pixels

    Returns:
        List of integers representing alternating counts of white and black runs,
        always starting with a white count
    """
    # TODO: Implement this function
    # Hint: Convert 2D array to 1D first
    # Hint: Must start with white count (1s), even if it's 0
    pass

def decode_rle(rle_data, image_shape):
    """
    Decompress RLE encoded data back to a 2D binary image.
    Black pixels are 0, white pixels are 1.

    Args:
        rle_data: List of integers representing alternating white and black runs
        image_shape: Tuple of (height, width) for the original image

    Returns:
        2D list of 1s and 0s representing the reconstructed image
    """
    # TODO: Implement this function
    # Hint: Create 1D array first, then reshape to 2D
    # Hint: First count is always for white pixels (1s)
    pass

def calculate_compression_ratio(original_image, rle_data):
    """
    Calculate the compression ratio achieved by RLE encoding.
    """
    original_size = len(original_image) * len(original_image[0])
    compressed_size = len(rle_data)
    return compressed_size / original_size

def display_image(image, label="Image"):
    """
    Create a text-based visualization of the binary image.
    Uses '█' for black (0) pixels and '·' for white (1) pixels.
    """
    print(f"\n{label}:")
    print("=" * (len(image[0]) + 2))
    for row in image:
        print("|" + "".join('█' if pixel == 0 else '·' for pixel in row) + "|")
    print("=" * (len(image[0]) + 2))

def main():
    # Create a simple test image (8x8 pixels)
    test_image = [
        [0, 0, 0, 0, 1, 1, 1, 1],
        [0, 0, 0, 0, 1, 1, 1, 1],
        [1, 1, 1, 1, 0, 0, 0, 0],
        [1, 1, 1, 1, 0, 0, 0, 0],
        [0, 0, 0, 0, 1, 1, 1, 1],
        [0, 0, 0, 0, 1, 1, 1, 1],
        [1, 1, 1, 1, 0, 0, 0, 0],
        [1, 1, 1, 1, 0, 0, 0, 0]
    ]

    # Test your implementation
    display_image(test_image, "Original Image")

    rle_data = encode_rle(test_image)
    print("\nRLE Encoded data:", rle_data)

    reconstructed = decode_rle(rle_data, (8, 8))
    display_image(reconstructed, "Reconstructed Image")

    ratio = calculate_compression_ratio(test_image, rle_data)
    print(f"\nCompression ratio: {ratio:.2f}")

    # Verify the reconstruction is correct
    is_perfect = all(row1 == row2 for row1, row2 in zip(test_image, reconstructed))
    print("Perfect reconstruction:", "Yes" if is_perfect else "No")

def create_test_cases():
    """
    Additional test cases to verify your implementation
    """
    test_cases = [
        # Test case 1: All black (should encode as [0, 6])
        [[0, 0, 0],
         [0, 0, 0]],

        # Test case 2: All white (should encode as [6, 0])
        [[1, 1, 1],
         [1, 1, 1]],

        # Test case 3: Alternating (should encode as [1, 1, 1, 1, 1, 1])
        [[1, 0, 1],
         [0, 1, 0]],

        # Test case 4: Starting with black (should encode as [0, 2, 2, 2])
        [[0, 0, 1],
         [1, 1, 0]]
    ]

    print("\nRunning additional test cases...")
    for i, test_image in enumerate(test_cases, 1):
        print(f"\nTest Case {i}:")
        display_image(test_image, "Original")
        rle_data = encode_rle(test_image)
        print("RLE data:", rle_data)
        reconstructed = decode_rle(rle_data, (len(test_image), len(test_image[0])))
        display_image(reconstructed, "Reconstructed")

if __name__ == "__main__":
    main()
    # Uncomment to run additional test cases:
    # create_test_cases()
